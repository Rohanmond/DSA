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
void usingDFS(Node *root, int currLevel)
{
    static int maxLevel = -1;
    if (root == nullptr)
        return;
    if (currLevel > maxLevel)
    {
        cout << root->data << " ";
        maxLevel++;
    }
    usingDFS(root->right, currLevel + 1);
    usingDFS(root->left, currLevel + 1);
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
    usingDFS(root, 0);
    return 0;
}