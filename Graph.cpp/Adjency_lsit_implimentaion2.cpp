#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <list>
using namespace std;
template <typename T>

class Graph
{
public:
    unordered_map<T, list<T>> AdjList;
    void addEdge(T u, T v, bool direction)
    {
        AdjList[u].push_back(v);
        if (direction == 0)
        {
            AdjList[v].push_back(u);
        }
    }
    void PrintAdjList()
    {
        for (auto node : AdjList)
        {
            cout << node.first << " -> ";
            for (auto neighbour : node.second)
            {
                cout << neighbour << ", ";
            }
            cout << endl;
        }
    }
};
using namespace std;
int main()
{

    Graph<char> g;
    // g.addEdge(0, 1, 0);
    // g.addEdge(1, 2, 0);
    // g.addEdge(0, 2, 0);
    // cout << endl;
    g.PrintAdjList();
    cout << endl;
    g.addEdge('a', 'b', 0);
    g.addEdge('b', 'c', 0);
    g.addEdge('a', 'c', 0);
    cout << endl;
    g.PrintAdjList();

    return 0;
}