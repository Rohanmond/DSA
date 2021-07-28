#include <bits/stdc++.h>
using namespace std;
int joinRopes(vector<int> &v)
{
    priority_queue<int, vector<int>, greater<int>> pq(v.begin(), v.end());
    int res = 0;
    while (pq.size() > 1)
    {
        int a = pq.top();
        pq.pop();
        int b = pq.top();
        pq.pop();
        res += (a + b);
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