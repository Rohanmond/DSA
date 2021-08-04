#include <bits/stdc++.h>
using namespace std;
class Graph
{
public:
    list<int> *nbrs;
    int V;
    Graph(int v)
    {
        nbrs = new list<int>[v];
        V = v;
    }
    void addEdge(int i, int j, bool isUndi = true)
    {
        nbrs[i].push_back(j);
        if (isUndi)
            nbrs[j].push_back(i);
    }
};
int maximalNetworkRank(int n, vector<vector<int>> &roads)
{
    vector<int> v[n];
    for (auto it : roads)
    {
        v[it[0]].push_back(it[1]);
        v[it[1]].push_back(it[0]);
    }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << v[i].size() << endl;
    // }
    int maxi = 0;
    for (auto it : roads)
    {
        int count = v[it[0]].size() - 1;
        count += v[it[1]].size() - 1;
        cout << count << endl;
        maxi = max(maxi, count - 1);
    }
    return maxi;
}
int main()
{
    vector<vector<int>> v{{0, 1}, {0, 3}, {1, 3}, {1, 2}};
    int n = 4;
    cout << maximalNetworkRank(n, v) << endl;
    return 0;
}