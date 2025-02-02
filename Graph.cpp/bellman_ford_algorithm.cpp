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
    void Bellmanford(int n, int src)
    {
        vector<int> dist(n, INT_MAX);
        dist[src] = 0;
        // n-1 relaxation step;
        for (int i = 0; i < n - 1; i++)
        {
            // for all edges;
            for (auto t : AdjList)
            {
                for (auto nbr : t.second)
                {
                    int u = t.first;
                    int v = nbr.first;
                    int wt = nbr.second;
                    if (dist[u] != INT_MAX && dist[u] + wt < dist[v])
                    {
                        dist[v] = wt + dist[u];
                    }
                }
            }
        }
        cout << "Printing dist vector" << endl;
        for (auto i : dist)
        {
            cout << i << " ";
        }
        cout << endl;
        bool negativecycle = false;
        for (auto t : AdjList)
        {
            for (auto nbr : t.second)
            {
                int u = t.first;
                int v = nbr.first;
                int wt = nbr.second;
                if (dist[u] != INT_MAX && dist[u] + wt < dist[v])
                {
                    negativecycle = true;
                    break;
                }
            }
        }
        if (negativecycle == true)
        {
            cout << "-ve cycle is present" << endl;
        }
        else
        {
            cout << "-ve cycle is not present" << endl;
        }
    }
};
int main()
{
    Graph g;
    g.addEdge(0, 1, -1, 0);
    g.addEdge(0, 2, 4, 0);
    g.addEdge(1, 2, 3, 0);
    g.addEdge(1, 3, 2, 0);
    g.addEdge(1, 4, 2, 0);
    g.addEdge(3, 1, 1, 0);
    g.addEdge(3, 2, 5, 0);
    g.addEdge(4, 3, -3, 0);
    g.PrintAdjList();
    g.Bellmanford(5, 0);
    return 0;
}