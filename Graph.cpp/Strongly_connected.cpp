#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <list>
#include <stack>
#include <math.h>
#include <set>
using namespace std;
class Graph
{
public:
    unordered_map<int, list<int>> AdjList;
    void addEdge(int u, int v, bool direction)
    {
        // direction = 1 -> undirected
        // direction = 0 -> directed
        AdjList[u].push_back(v);
        if (direction == 1)
        {
            AdjList[v].push_back(u);
        }
    }
    void PrintAdjList()
    {
        for (auto i : AdjList)
        {
            cout << i.first << "->";
            for (auto j : i.second)
            {
                cout << "(" << j << "," << j << "), ";
            }
            cout << endl;
        }
    }
    void dfs1(int src, stack<int> &s, unordered_map<int, bool> &vis)
    {
        vis[src] = true;

        for (auto nbr : AdjList[src])
        {
            if (!vis[nbr])
            {
                dfs1(nbr, s, vis);
            }
        }
        s.push(src);
    }
    void dfs2(int src, unordered_map<int, bool> &visited, unordered_map<int, list<int>> &adjNew)
    {
        visited[src] = true;
        cout << src << ", ";

        for (auto nbr : adjNew[src])
        {
            if (!visited[nbr])
            {
                dfs2(nbr, visited, adjNew);
            }
        }
    }
    int countSCC(int n)
    {
        stack<int> s;
        unordered_map<int, bool> visited;

        // find topo ordering
        for (int i = 0; i < n; i++)
        {
            if (!visited[i])
            {
                dfs1(i, s, visited);
            }
        }

        // reverse all edges
        unordered_map<int, list<int>> AdjNew;

        for (auto t : AdjList)
        {
            for (auto nbr : t.second)
            {
                int u = t.first;
                int v = nbr;
                // v-> u insert
                AdjNew[v].push_back(u);
            }
        }
        // traversse using DFS
        int count = 0;
        unordered_map<int, bool> visited2;

        while (!s.empty())
        {
            int node = s.top();
            s.pop();
            if (!visited2[node])
            {
                cout << "Printing " << count + 1 << "th SCC: ";
                dfs2(node, visited2, AdjNew);
                cout << endl;
                count++;
            }
        }
        return count;
    }
};
int main()
{
    Graph g;
    g.addEdge(0, 1, 0);
    g.addEdge(1, 2, 0);
    g.addEdge(2, 3, 0);
    g.addEdge(3, 0, 0);
    g.addEdge(2, 4, 0);
    g.addEdge(4, 5, 0);
    g.addEdge(5, 6, 0);
    g.addEdge(6, 4, 0);
    g.addEdge(6, 7, 0);
    cout << g.countSCC(8);

    return 0;
}