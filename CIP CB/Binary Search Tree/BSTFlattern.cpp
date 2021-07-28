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
class LL
{
public:
    Node *head;
    Node *tail;
};
Node *BST(Node *root, int d)
{
    if (root == nullptr)
    {
        Node *n = new Node(d);
        return n;
    }
    if (d <= root->data)
    {
        root->left = BST(root->left, d);
    }
    else
    {
        root->right = BST(root->right, d);
    }
    return root;
}
Node *createBST()
{
    int d;
    cin >> d;
    Node *root = nullptr;
    while (d != -1)
    {
        root = BST(root, d);
        cin >> d;
    }
    return root;
}
LL flatternBST(Node *root)
{
    LL l;
    if (root == nullptr)
    {
        l.head = l.tail = nullptr;
        return l;
    }
    if (root->left == nullptr && root->right == nullptr)
    {
        l.head = l.tail = root;
        return l;
    }
    if (root->left != nullptr && root->right == nullptr)
    {
        LL l = flatternBST(root->left);
        l.tail->right = root;
        return l;
    }
    if (root->left == nullptr && root->right != nullptr)
    {
        LL l = flatternBST(root->right);
        root->right = l.head;
        l.head = root;
        return l;
    }
    if (root->left != nullptr && root->right != nullptr)
    {
        LL l1 = flatternBST(root->left);
        LL l2 = flatternBST(root->right);
        l1.tail->right = root;
        root->right = l2.head;
        l.head = l1.head;
        l.tail = l2.tail;
        return l;
    }
}
void Inorder(Node *root)
{
    if (root == nullptr)
        return;
    Inorder(root->left);
    cout << root->data << endl;
    Inorder(root->right);
}
int main()
{
    Node *root = createBST();
    Inorder(root);
    cout << endl;
    LL l = flatternBST(root);
    Node *temp = l.head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->right;
    }
    cout << endl;

    return 0;
}
