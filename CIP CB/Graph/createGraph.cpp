#include <bits/stdc++.h>
using namespace std;
class Graph
{
    int V;
    list<int> *nbrs;

public:
    Graph(int v)
    {
        this->V = v;
        nbrs = new list<int>[v];
    }
    void addEdge(int a, int b, bool unDi = true)
    {
        nbrs[a].push_back(b);
        if (unDi)
        {
            nbrs[b].push_back(a);
        }
    }
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "->";
            for (auto it : nbrs[i])
                cout << it << " ";
            cout << endl;
        }
    }
    void printBFS(int source)
    {
        queue<int> q;
        q.push(source);
        bool visited[V]{0};
        visited[source] = true;
        while (!q.empty())
        {
            int k = q.front();
            q.pop();
            cout << k << " ";
            for (auto it : nbrs[k])
            {
                if (visited[it] == false)
                {
                    q.push(it);
                    visited[it] = true;
                }
            }
        }
    }
};
int main()
{
    Graph g(7);
    g.addEdge(1, 2);
    g.addEdge(1, 0);
    g.addEdge(2, 3);
    g.addEdge(0, 4);
    g.addEdge(3, 5);
    g.addEdge(3, 4);
    g.addEdge(4, 5);
    g.addEdge(5, 6);
    g.printGraph();
    cout << endl;
    g.printBFS(1);
    cout << endl;
    return 0;
}