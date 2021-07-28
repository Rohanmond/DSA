#include <bits/stdc++.h>
using namespace std;
class Heap
{
    vector<int> v;
    bool minmHeap;
    bool cmp(int a, int b)
    {
        if (minmHeap)
            return a < b;
        else
            return a > b;
    }
    void heapify(int i)
    {
        int maxInd = v.size() - 1;
        int left = i * 2;
        int right = i * 2 + 1;
        int min_idx = i;
        if (left <= maxInd && cmp(v[left], v[i]))
            min_idx = left;
        if (right <= maxInd && cmp(v[right], v[min_idx]))
            min_idx = right;
        if (min_idx != i)
        {
            swap(v[min_idx], v[i]);
            heapify(min_idx);
        }
    }

public:
    Heap(int defaultSize = 10, bool type = true)
    {
        v.reserve(10);
        minmHeap = type;
        v.push_back(-1);
    }
    void insert(int d)
    {
        v.push_back(d);

        int ind = v.size() - 1;
        int parent = ind / 2;
        while (parent != 0 && cmp(v[ind], v[parent]))
        {
            swap(v[ind], v[parent]);
            ind = parent;
            parent = parent / 2;
        }
        for (auto i : v)
            cout << i << " ";
        cout << endl;
    }
    void pop()
    {
        if (v.size() > 1)
        {
            swap(v[1], v[v.size() - 1]);
            v.pop_back();
            heapify(1);
        }
        for (auto it : v)
            cout << it << " ";
        cout << endl;
    }
};
int main()
{
    Heap *h = new Heap();
    int d;
    cin >> d;
    while (d != -1)
    {
        h->insert(d);
        cin >> d;
    }
    cin >> d;
    while (d != -1)
    {
        h->pop();
        cin >> d;
    }
    delete h;
    return 0;
}