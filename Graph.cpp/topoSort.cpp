#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#include <list>
#include <stack>
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

    void topoSort(int src, unordered_map<int, bool> &visited, stack<int> &ans)
    {
        visited[src] = true;
        for (auto nbr : AdjList[src])
        {
            if (!visited[nbr])
            {
                topoSort(nbr, visited, ans);
            }
        }
        ans.push(src);
    }
    void topoSortUsingbfs(int n, vector<int> &ans)
    {
        queue<int> q;
        unordered_map<int, int> indegree;
        for (auto i : AdjList)
        {
            int src = i.first;
            for (auto nbr : i.second)
            {
                indegree[nbr]++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (indegree[i] == 0)
            {
                q.push(i);
            }
        }
        while (!q.empty())
        {
            int fNode = q.front();
            q.pop();
            ans.push_back(fNode);
            for (auto nbr : AdjList[fNode])
            {
                indegree[nbr]--;
                if (indegree[nbr] == 0)
                {
                    q.push(nbr);
                }
            }
        }
    }
};
int main()
{

    Graph<int> g;
    int n;
    cout << "Enter the number of node" << endl;
    cin >> n;

    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 1, 1);
    // g.addEdge(3, 7, 1);
    // g.addEdge(6, 7, 1);
    // g.addEdge(7, 0, 1);
    // g.addEdge(7, 1, 1);

    g.PrintAdjList();
    cout << endl;
    cout << endl;
    unordered_map<int, bool> visited;
    stack<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.topoSort(i, visited, ans);
        }
    }
    cout << "Printing Topo Sort" << endl;
    while (!ans.empty())
    {
        cout << ans.top() << " ";
        ans.pop();
    }
    cout << endl;
    cout << "Printing topo sort using bfs" << endl;
    vector<int> ans2;
    g.topoSortUsingbfs(n, ans2);
    if (ans2.size() == n)
    {
        cout << "it is valid topological sort" << endl;
    }
    else
    {
        cout << " Cycle is present" << endl;
    }
    for (auto i : ans2)
    {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}