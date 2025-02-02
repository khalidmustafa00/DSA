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
    void floydWarshall(int n)
    {
        vector<vector<int>> dist(n, vector<int>(n, 1e9));
        for (int i = 0; i < n; i++)
        {
            dist[i][i] = 0;
        }
        for (auto t : AdjList)
        {
            for (auto nbr : t.second)
            {
                int u = t.first;
                int v = nbr.first;
                int wt = nbr.second;
                dist[u][v] = wt;
            }
        }
        for (int helper = 0; helper < n; helper++)
        {
            for (int src = 0; src < n; src++)
            {
                for (int dest = 0; dest < n; dest++)
                {
                    dist[src][dest] = min(dist[src][dest], dist[src][helper] + dist[helper][dest]);
                }
            }
        }
        cout << "printing distance array" << endl;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << dist[i][j] << ", ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g;
    g.addEdge(0, 1, 3, 0);
    g.addEdge(0, 3, 5, 0);
    g.addEdge(1, 0, 2, 0);
    g.addEdge(1, 3, 4, 0);
    g.addEdge(2, 1, 1, 0);
    g.addEdge(3, 2, 2, 0);
    g.floydWarshall(4);
    return 0;
}