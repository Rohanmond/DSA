#include <bits/stdc++.h>
using namespace std;

// unordered_map<edge, bool> edgeMap;
struct edge
{
    int u;
    int v;
};
vector<vector<int>> createGraph(int v, vector<edge> &e)
{
    vector<vector<int>> adjList(v);
    for (int i = 0; i < e.size(); i++)
    {
        adjList[e[i].u].push_back(e[i].v);
    }
}

int main()
{
    vector<edge> edges;
    int noOfNodes;
    cin >> noOfNodes;
    for (int i = 0; i < noOfNodes; i++)
    {
        edge e;
        cin >> e.u;
        cin >> e.v;
        edges.push_back(e);
    }
    vector<vector<int>> adjList = createGraph(noOfNodes, edges);
    for (auto v : adjList)
    {
        for (auto ed : v)
        {
            cout << ed << ",";
        }
        cout << endl;
    }
    return 0;
}