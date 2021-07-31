#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int value;
    int rowIndex;
    int colIndex;
    Node(int v, int ri, int ci)
    {
        value = v;
        rowIndex = ri;
        colIndex = ci;
    }
};
class CustomComparator
{
public:
    bool operator()(Node a, Node b)
    {
        return a.value > b.value;
    }
};
vector<int> mergeKSortedArray(vector<vector<int>> &v)
{
    vector<int> res;
    priority_queue<Node, vector<Node>, CustomComparator> pq;
    for (int i = 0; i < v.size(); i++)
    {
        Node n(v[i][0], i, 0);
        pq.push(n);
    }
    while (!pq.empty())
    {
        Node n = pq.top();
        pq.pop();
        int value = n.value;
        res.push_back(value);
        int ri = n.rowIndex;
        int ci = n.colIndex;
        if (pq.size() == 0)
            break;
        if (!pq.empty() && ci + 1 < v[ri].size())
        {
            Node d(v[ri][ci + 1], ri, ci + 1);
            pq.push(d);
        }
    }
    return res;
}
int main()
{
    vector<vector<int>> v{{2, 6, 12, 15}, {1, 3, 14, 20}, {3, 5, 8, 10}};
    vector<int> res = mergeKSortedArray(v);
    for (auto it : res)
        cout << it << endl;
    return 0;
}