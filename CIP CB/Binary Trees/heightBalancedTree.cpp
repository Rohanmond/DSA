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
void printIn(Node *root)
{
    if (root == nullptr)
        return;
    printIn(root->left);
    cout << root->data << " ";
    printIn(root->right);
}
pair<bool, int> heightBalanced(Node *root)
{
    if (root == nullptr)
    {
        return {1, 0};
    }
    pair<bool, int> left = heightBalanced(root->left);
    pair<bool, int> right = heightBalanced(root->right);
    int h1 = left.second;
    int h2 = right.second;
    if (left.first == 0 || right.first == 0)
        return {0, max(h1, h2) + 1};
    if (abs(h1 - h2) > 1)
        return {0, max(h1, h2) + 1};
    return {1, max(h1, h2) + 1};
}
int main()
{
    Node *root = create();
    printIn(root);
    cout << endl;
    pair<bool, int> res = heightBalanced(root);
    cout << res.first << endl;
    return 0;
}