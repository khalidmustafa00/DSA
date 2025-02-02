#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <list>

using namespace std;
class Graph
{
public:
    unordered_map<int, list<pair<int, int>>> AdjList;
    void addEdge(int u, int v, int weight, bool direction)
    {
        AdjList[u].push_back({v, weight});
        if (direction == 0)
        {
            AdjList[v].push_back({u, weight});
        }
    }
    void PrintAdjList()
    {
        for (auto node : AdjList)
        {
            cout << node.first << " -> ";
            for (auto neighbour : node.second)
            {
                cout << "(" << neighbour.first << "," << neighbour.second << "), ";
            }
            cout << endl;
        }
    }
};
using namespace std;
int main()
{

    Graph g;
    // g.addEdge(0, 1, 0);
    // g.addEdge(1, 2, 0);
    // g.addEdge(0, 2, 0);
    // cout << endl;
    // g.PrintAdjList();
    // cout << endl;
    g.addEdge(0, 1, 5, 1);
    g.addEdge(1, 2, 8, 1);
    g.addEdge(0, 2, 6, 1);
    cout << endl;
    g.PrintAdjList();

    return 0;
}