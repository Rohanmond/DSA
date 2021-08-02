#include <bits/stdc++.h>
using namespace std;
class Graph
{
    list<int> *l;
    int V;

public:
    Graph(int v)
    {
        l = new list<int>[v];
        V = v;
    }
    void addEdge(int i, int j, bool isUndi = true)
    {
        l[i].push_back(j);
        if (isUndi)
            l[j].push_back(i);
    }
    void printGraph()
    {
        for (int i = 0; i < V; i++)
        {
            cout << i << "-->";
            for (auto it : l[i])
            {
                cout << it << ",";
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(5, 4);
    g.addEdge(5, 3);

    g.addEdge(1, 2);

    g.addEdge(2, 3);
    g.addEdge(3, 4);

      g.printGraph();
    return 0;
}