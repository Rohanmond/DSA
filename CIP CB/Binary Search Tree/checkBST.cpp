#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = nullptr;
        right = nullptr;
    }
};
bool checkBST(Node *root, int mini, int maxi)
{
    if (root == nullptr)
        return 1;
    if (root->data < mini || root->data > maxi)
    {
        cout << "root data" << root->data << endl;
        return 0;
    }
    bool l = checkBST(root->left, mini, root->data);
    bool r = checkBST(root->right, root->data, maxi);
    return l * r;
}
Node *create()
{
    int d;
    cin >> d;
    if (d == -1)
        return nullptr;
    Node *root = new Node(d);
    root->left = create();
    root->right = create();
    return root;
}
int main()
{
    Node *root = create();
    int res = checkBST(root, INT_MIN, INT_MAX);
    cout << res << endl;
    return 0;
}