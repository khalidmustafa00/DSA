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
    void bfs(int src, unordered_map<int, bool> &visited)
    {
        queue<int> pq;

        pq.push(src);
        visited[src] = true;
        while (!pq.empty())
        {
            int frontnode = pq.front();
            pq.pop();
            cout << frontnode << ", ";
            for (auto neighbour : AdjList[frontnode])
            {
                if (!visited[neighbour])
                {
                    pq.push(neighbour);
                    visited[neighbour] = true;
                }
            }
        }
    }
    void dfs(int src, unordered_map<int, bool> &visited)
    {
        cout << src << ", ";
        visited[src] = true;
        for (auto neighbour : AdjList[src])
        {
            if (!visited[neighbour])
            {
                dfs(neighbour, visited);
            }
        }
    }
    bool checkCyclicUsingBfs(int src, unordered_map<int, bool> &visited)
    {
        queue<int> p;
        unordered_map<int, int> parent;
        p.push(src);
        visited[src] = true;
        parent[src] = -1;
        while (!p.empty())
        {
            int frontnode = p.front();
            p.pop();
            for (auto nbr : AdjList[frontnode])
            {
                if (!visited[nbr])
                {
                    p.push(nbr);
                    visited[nbr] = true;
                    parent[nbr] = frontnode;
                }
                else
                {
                    if (nbr != parent[frontnode])
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
    bool checkCyclicUsingDfs(int src, unordered_map<int, bool> &visitedDfs, int parent)
    {
        visitedDfs[src] = true;

        for (auto nbr : AdjList[src])
        {
            if (!visitedDfs[nbr])
            {
                bool agekaans = checkCyclicUsingDfs(nbr, visitedDfs, src);
                if (agekaans == true)
                {
                    return true;
                }
            }
            else
            {
                if (nbr != parent)
                {
                    return true;
                }
            }
        }
        return false;
    }
    bool checkcyclicDirectedGraphUsingDfs(int src, unordered_map<int, bool> &visited, unordered_map<int, bool> &dfsvisited)
    {
        visited[src] = true;
        dfsvisited[src] = true;
        for (auto nbr : AdjList[src])
        {
            if (!visited[nbr])
            {
                bool agekanswer = checkcyclicDirectedGraphUsingDfs(nbr, visited, dfsvisited);
                if (agekanswer == true)
                {
                    return true;
                }
            }
            if (visited[nbr] == true && dfsvisited[nbr] == true)
            {
                return true;
            }
        }
        dfsvisited[src] = false;
        return false;
    }
    void topoSort(int src, unordered_map<int, bool> &visited, stack<int> &ans)
    {
        visited[src] = true;
        for (auto nbr : AdjList[src])
        {
            if (!visited[nbr])
            {
                topSort(nbr, visited, ans);
            }
        }
        ans.push(src);
        }
};
int main()
{

    Graph<int> g;
    int n;
    cout << "Enter the number of node" << endl;
    cin >> n;
    unordered_map<int, bool> visited;

    g.addEdge(0, 1, 1);
    g.addEdge(1, 2, 1);
    g.addEdge(2, 3, 1);
    g.addEdge(3, 4, 1);
    g.addEdge(4, 3, 1);

    g.PrintAdjList();
    cout << endl;

    cout << "Printing bfs Traversal" << endl;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            g.bfs(i, visited);
        }
    }
    cout << endl
         << "printing dfs Traversal" << endl;
    unordered_map<int, bool> visited2;
    for (int i = 0; i < n; i++)
    {
        if (!visited2[i])
        {
            g.dfs(i, visited2);
        }
    }
    cout << endl;

    bool ans = false;
    unordered_map<int, bool> visited1;
    for (int i = 0; i < n; i++)
    {
        if (!visited1[i])
        {
            ans = g.checkCyclicUsingBfs(i, visited1);
            if (ans == true)
            {
                break;
            }
        }
    }
    if (ans == true)
    {
        cout << "Cycle Present" << endl;
    }
    else
    {
        cout << "Cycle Absent" << endl;
    }
    cout << endl;

    bool ansDfs = false;
    unordered_map<int, bool> visitedDfs;
    for (int i = 0; i < n; i++)
    {
        if (!visitedDfs[i])
        {
            int parent = -1;
            ansDfs = g.checkCyclicUsingDfs(i, visitedDfs, -1);
            if (ansDfs == true)
            {
                break;
            }
        }
    }
    if (ansDfs == true)
    {
        cout << "Cycle Present" << endl;
    }
    else
    {
        cout << "Cycle Absent" << endl;
    }
    bool ans3 = false;
    unordered_map<int, bool> visited3;
    unordered_map<int, bool> dfsvisited3;
    for (int i = 0; i < n; i++)
    {
        if (!visited3[i])
        {
            ans3 = g.checkcyclicDirectedGraphUsingDfs(i, visited3, dfsvisited3);
            if (ans3 == true)
            {
                break;
            }
        }
    }
    if (ans3 == true)
    {
        cout << "Cycle Present" << endl;
    }
    else
    {
        cout << "Cycle Absent" << endl;
    }

    return 0;
}