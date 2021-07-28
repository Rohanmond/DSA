#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b, bool minHeap)
{
    if (minHeap)
        return a < b;
    else
        return a > b;
}
void heapifyBottomUp(vector<int> &v, int i, bool minHeap)
{
    int parent = i / 2;
    while (parent != 0 && cmp(v[i], v[parent], minHeap))
    {
        swap(v[parent], v[i]);
        i = parent;
        parent = parent / 2;
    }
}
void heapifyTopDown(vector<int> &v, int i, bool minHeap)
{
    int maxInd = v.size() - 1;
    int left = i * 2;
    int right = i * 2 + 1;
    int min_idx = i;
    if (left <= maxInd && cmp(v[left], v[i], minHeap))
        min_idx = left;
    if (right <= maxInd && cmp(v[right], v[min_idx], minHeap))
        min_idx = right;
    if (min_idx != i)
    {
        swap(v[min_idx], v[i]);
        heapifyTopDown(v, min_idx, minHeap);
    }
}
void buildHeap(vector<int> &v, bool minHeap = true)
{
    for (int i = 1; i < v.size(); i++)
    {
        heapifyBottomUp(v, i, minHeap);
    }
}
void buildHeapOptimized(vector<int> &v, bool minHeap = true)
{
    for (int i = v.size() / 2; i >= 1; i--)
    {
        heapifyTopDown(v, i, minHeap);
    }
}
int main()
{
    vector<int> v{-1, 4, 1, 3, 7, 8, 17, 2, 9, 10};
    buildHeapOptimized(v, false);
    for (auto it : v)
        cout << it << " ";
    cout << endl;
    return 0;
}