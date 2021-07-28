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
void bfs(Node *root)
{
    queue<Node *> q;
    if (root == nullptr)
        return;
    q.push(root);
    q.push(nullptr);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp->left != nullptr)
            q.push(temp->left);
        if (temp->right != nullptr)
            q.push(temp->right);
        cout << temp->data << ",";
        if (q.front() == nullptr)
        {
            q.pop();
            cout << endl;
            if (!q.empty())
                q.push(nullptr);
        }
    }
}
Node *create(Node *root, int d)
{
    if (root == nullptr)
    {
        Node *t = new Node(d);
        return t;
    }
    if (d <= root->data)
    {
        root->left = create(root->left, d);
    }
    else
    {
        root->right = create(root->right, d);
    }
    return root;
}
Node *build()
{
    int d;
    cin >> d;
    Node *root = nullptr;
    while (d != -1)
    {
        root = create(root, d);
        cin >> d;
    }
    return root;
}
void printIn(Node *root)
{
    if (root == nullptr)
        return;
    printIn(root->left);
    cout << root->data << endl;
    printIn(root->right);
}
int search(Node *root, int data)
{
    if (root == nullptr)
        return -1;
    int ans;
    if (root->data == data)
        return 1;
    if (data < root->data)
    {
        ans = search(root->left, data);
    }
    else
    {
        ans = search(root->right, data);
    }
    return ans;
}
Node *deleteInBST(Node *root, int d)
{
    if (root == nullptr)
        return nullptr;
    if (d < root->data)
    {
        root->left = deleteInBST(root->left, d);
        return root;
    }
    else if (d == root->data)
    {
        if (root->left == nullptr && root->right == nullptr)
        {
            delete root;
            return nullptr;
        }
        if (root->left == nullptr && root->right != nullptr)
        {
            Node *temp = root->right;
            delete root;
            return temp;
        }
        if (root->left != nullptr && root->right == nullptr)
        {
            Node *temp = root->left;
            delete root;
            return temp;
        }
        if (root->left != nullptr && root->right != nullptr)
        {
            Node *temp = root->right;
            while (temp->left != nullptr)
            {
                temp = temp->left;
            }
            root->data = temp->data;
            root->right = deleteInBST(root->right, temp->data);
            return root;
        }
    }
    else
    {
        root->right = deleteInBST(root->right, d);
        return root;
    }
}
int main()
{
    Node *root = nullptr;
    root = build();
    printIn(root);
    cout << endl;
    bfs(root);
    cout << endl
         << endl;
    printIn(root);
    int s;
    cout << "Enter the search itenm:" << endl;
    cin >> s;
    int ans = search(root, s);
    cout << ans << endl;

    cout << "Enter the node to delete:" << endl;
    cin >> s;
    root = deleteInBST(root, s);
    printIn(root);
    bfs(root);
    return 0;
}