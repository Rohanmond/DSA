#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int d;
    Node *left;
    Node *right;
    Node(int data)
    {
        d = data;
        left = nullptr;
        right = nullptr;
    }
};
Node *createHBT(vector<int> &v, int i, int j)
{
    if (i > j)
        return nullptr;
    int mid = (i + j) / 2;
    Node *root = new Node(v[mid]);
    root->left = createHBT(v, i, mid - 1);
    root->right = createHBT(v, mid + 1, j);
    return root;
}
void printIn(Node *root)
{
    if (root == nullptr)
        return;
    printIn(root->left);
    cout << root->d << " ";
    printIn(root->right);
}
int main()
{
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    Node *root = createHBT(v, 0, v.size() - 1);
    printIn(root);
    return 0;
}