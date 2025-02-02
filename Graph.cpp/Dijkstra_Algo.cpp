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

    void shortesDistanceDijkstra(int src, int n)
    {
        vector<int> dist(n, INT_MAX);
        set<pair<int, int>> st;
        dist[src] = 0;
        st.insert({0, src});
        while (!st.empty())
        {
            // fetch the smallest or first element
            auto topElement = *(st.begin());
            int nodeDistance = topElement.first;
            int node = topElement.second;
            // pop from set
            st.erase(st.begin());
            for (auto nbr : AdjList[node])
            {
                if (nodeDistance + nbr.second < dist[nbr.first])
                {
                    // mujhe distance update krna hai;
                    auto result = st.find({dist[nbr.first],
                                           nbr.first});
                    // if found then remove;
                    if (result != st.end())
                    {
                        st.erase(result);
                                        }
                    dist[nbr.first] = nodeDistance + nbr.second;
                    st.insert({dist[nbr.first],
                               nbr.first});
                }
            }
        }
        cout << "Printing ans" << endl;
        for (int i = 0; i < n; i++)
        {
            cout << dist[i] << ", ";
        }
        cout << endl;
    }
};
int main()
{

    Graph g;

    g.addEdge(6, 3, 2, 1);
    g.addEdge(6, 1, 14, 1);
    g.addEdge(3, 1, 9, 1);
    g.addEdge(3, 2, 10, 1);
    g.addEdge(1, 2, 7, 1);
    g.addEdge(2, 4, 15, 1);
    g.addEdge(4, 3, 11, 1);
    g.addEdge(6, 5, 9, 1);
    g.addEdge(4, 5, 6, 1);

    g.PrintAdjList();
    g.shortesDistanceDijkstra(6, 7);

    return 0;
}