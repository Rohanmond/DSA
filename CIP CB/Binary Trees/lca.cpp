#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = nullptr;
        right = nullptr;
    }
};
void printInorder(Node *root)
{
    if (root == nullptr)
        return;
    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
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
int printLCA(Node *root, int a, int b)
{
    if (root == nullptr)
        return -1;
    int l = printLCA(root->left, a, b);
    int r = printLCA(root->right, a, b);
    if (l == 1 && r == 1)
    {
        cout << root->data << endl;
        return -1;
    }
    if (root->data == a)
    {
        if (r == 1)
        {
            cout << root->data << endl;
            return -1;
        }
        return 1;
    }
    if (root->data == b)
    {
        if (l == 1)
        {
            cout << root->data << endl;
            return -1;
        }
        return 1;
    }
    return -1;
}
int main()
{
    Node *root = create();
    printInorder(root);
    int a, b;
    cin >> a >> b;
    int r = printLCA(root, a, b);
    cout << r << endl;
    return 0;
}