#include <bits/stdc++.h>
using namespace std;
int joinRopes(vector<int> &v)
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int res = 0;
    for (int i = 0; i < v.size(); i++)
    {
        pq.push(v[i]);
    }
    while (true)
    {
        //     if (pq.empty())
        //         break;
        int a = pq.top();
        pq.pop();
        if (pq.empty())
            break;
        int b = pq.top();
        pq.pop();
        res += (a + b);
        cout << (a + b) << endl;
        if (pq.empty())
            break;
        pq.push(a + b);
    }
    return res;
}
int main()
{
    vector<int> v{4, 3, 2, 6};
    cout << joinRopes(v) << endl;
    return 0;
}