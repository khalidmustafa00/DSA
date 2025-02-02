#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <list>
#include <stack>
#include <math.h>
using namespace std;

class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> AdjList;
    void addEdge(int u, int v, int wt, bool direction)
    {
        AdjList[u].push_back({v, wt});
        if (direction == 1)
        {
            AdjList[v].push_back({u, wt});
        }
    }
    void PrintAdjList()
    {
        for (auto i : AdjList)
        {
            cout << i.first << " -> ";
            for (auto j : i.second)
            {
                cout << "(" << j.first << "," << j.second << ")" << ", ";
            }
            cout << endl;
        }
    }

    void topoSortDfs(int src, unordered_map<int, bool> &visited, stack<int> &ans)
    {
        visited[src] = true;
        for (auto nbr : AdjList[src])
        {
            if (!visited[nbr.first])
            {
                topoSortDfs(nbr.first, visited, ans);
            }
        }
        ans.push(src);
    }
    void shortestpathDfs(int dest, stack<int> topoOrder, int n)
    {
        vector<int> distance(n, INT_MAX);
        int src = topoOrder.top();
        topoOrder.pop();
        distance[src] = 0;
        for (auto nbr : AdjList[0])
        {
            if (distance[0] + nbr.second < distance[nbr.first])
            {
                distance[nbr.first] = distance[0] + nbr.second;
            }
        }
        while (!topoOrder.empty())
        {
            int topElement = topoOrder.top();
            topoOrder.pop();
            if (distance[topElement] != INT_MAX)
            {

                for (auto nbr : AdjList[topElement])
                {
                    if (distance[topElement] + nbr.second < distance[nbr.first])
                    {
                        distance[nbr.first] = distance[topElement] + nbr.second;
                    }
                }
            }
        }
        cout << "Printing Ans" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << i << " -> " << distance[i] << endl;
        }
    }
};
int main()
{

    Graph g;

    g.addEdge(0, 1, 5, 0);
    g.addEdge(0, 2, 3, 0);
    g.addEdge(2, 1, 2, 0);
    g.addEdge(1, 3, 3, 0);
    g.addEdge(2, 3, 5, 0);
    g.addEdge(2, 4, 6, 0);
    g.addEdge(4, 3, 1, 0);

    g.PrintAdjList();
    cout << endl;
    cout << endl;
    unordered_map<int, bool> visited;
    stack<int> topoOrder;

    g.topoSortDfs(0, visited, topoOrder);
    g.shortestpathDfs(3, topoOrder, 5);

    return 0;
}