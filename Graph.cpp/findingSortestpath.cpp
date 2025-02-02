#include <iostream>
#include <queue>
#include <bits/stdc++.h>
#include <unordered_map>
#include <algorithm>
using namespace std;
class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> AdjList;
    void addEdge(int u, int v, int wt, bool direction)
    {
        AdjList[u].push_back({v, wt});
        if (direction == 0)
        {
            AdjList[v].push_back({u, wt});
        }
    }
    void printAdjList()
    {
        for (auto i : AdjList)
        {
            cout << i.first << "-> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << ")" << ", ";
            }
            cout << endl;
        }
    }
    void Shortestpath(int src, int dest)
    {
        unordered_map<int, bool> visited;
        queue<int> q;
        unordered_map<int, int> parent;
        q.push(src);
        visited[src] = true;
        parent[src] = -1;
        while (!q.empty())
        {
            int fNode = q.front();
            q.pop();
            for (auto nbr : AdjList[fNode])
            {
                if (!visited[nbr.first])
                {
                    visited[nbr.first] = true;
                    parent[nbr.first] = fNode;
                    q.push(nbr.first);
                }
            }
        }
        vector<int> ans;
        int node = dest;
        while (node != -1)
        {
            ans.push_back(node);
            node = parent[node];
        }
        reverse(ans.begin(), ans.end());
        cout << "printing ans" << endl;
        for (auto i : ans)
        {
            cout << i << ", ";
        }
        cout << endl;
    }
};
int main()
{
    Graph g;
    g.addEdge(0, 1, 1, 1);
    g.addEdge(1, 2, 1, 1);
    g.addEdge(2, 3, 1, 1);
    g.addEdge(3, 4, 1, 1);
    g.addEdge(0, 5, 1, 1);
    g.addEdge(5, 4, 1, 1);
    g.addEdge(0, 6, 1, 1);
    g.addEdge(6, 7, 1, 1);
    g.addEdge(7, 8, 1, 1);
    g.addEdge(8, 4, 1, 1);
    g.printAdjList();
    cout << endl;
    int src = 0;
    int dest = 4;
    g.Shortestpath(src, dest);

    return 0;
}