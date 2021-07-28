#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b, bool minheap)
{
    if (minheap)
        return a < b;
    else
        return a > b;
}
void heapify(vector<int> &v, int i, bool minheap, int j)
{
    int ch1 = i * 2;
    int ch2 = i * 2 + 1;
    int min_idx = i;

    if (ch1 <= j && cmp(v[ch1], v[i], minheap))
    {
        min_idx = ch1;
    }
    if (ch2 <= j && cmp(v[ch2], v[min_idx], minheap))
        min_idx = ch2;
    if (min_idx != i)
    {
        swap(v[min_idx], v[i]);
        heapify(v, min_idx, minheap, j);
    }
}
void buildHeapOptimized(vector<int> &v, bool minHeap = true)
{
    for (int i = v.size() / 2; i >= 1; i--)
    {
        heapify(v, i, minHeap, v.size() - 1);
    }
}
void heapSort(vector<int> &v, bool decreased)
{
    buildHeapOptimized(v, decreased);
    for (int i = v.size() - 1; i > 1;)
    {
        swap(v[1], v[i]);
        i--;
        heapify(v, 1, decreased, i);
    }
}
int main()
{
    vector<int> v{-1, 4, 3, 0, 1, 2};
    heapSort(v, true);
    for (auto it : v)
        cout << it << " ";
    cout << endl;
    return 0;
}