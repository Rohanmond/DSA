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
int find(vector<int> &f, int key, int i, int j)
{
    for (int p = i; p <= j; p++)
    {
        if (f[p] == key)
            return p;
    }
    return -1;
}

Node *build(vector<int> &preorder, vector<int> &inorder, int i, int j)
{
    static int k = 0;
    if (i > j)
        return nullptr;
    if (k == preorder.size())
        return nullptr;
    int temp = preorder[k];
    k++;
    Node *root = new Node(temp);
    int index = find(inorder, temp, i, j);
    root->left = build(preorder, inorder, i, index - 1);
    root->right = build(preorder, inorder, index + 1, j);
    return root;
}
void printInorder(Node *root)
{
    if (root == nullptr)
        return;
    printInorder(root->left);
    cout << root->d << " ";
    printInorder(root->right);
}
int main()
{
    vector<int> pre{1, 2, 3, 4, 8, 5, 6, 7};
    vector<int> in{3, 2, 8, 4, 1, 6, 7, 5};

    Node *root = build(pre, in, 0, pre.size() - 1);
    printInorder(root);
    return 0;
}