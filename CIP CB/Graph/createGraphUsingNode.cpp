#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    string name;
    list<string> nbr;
    Node(string s)
    {
        name = s;
    }
};
class Graph
{
    unordered_map<string, Node *> m;

public:
    Graph(vector<string> list)
    {
        for (auto it : list)
        {
            m[it] = new Node(it);
        }
    }
    void addEdge(string x, string y, bool undi = false)
    {
        m[x]->nbr.push_back(y);
        if (undi)
        {
            m[y]->nbr.push_back(x);
        }
    }
    void printGraph()
    {
        for (auto it : m)
        {
            cout << it.first << "-->";
            Node *temp = it.second;
            for (auto it2 : temp->nbr)
            {
                cout << it2 << ",";
            }
            cout << endl;
        }
    }
};
int main()
{
    vector<string> v{"London", "New York", "Paris", "Delhi"};
    Graph g(v);
    g.addEdge("New York", "London");
    g.addEdge("Delhi", "London");
    g.addEdge("Paris", "New York");
    g.addEdge("Delhi", "Paris");
    g.printGraph();
    return 0;
}