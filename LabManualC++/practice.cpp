#include <bits/stdc++.h>
 using namespace std;

struct Node
{
    int data;
    Node *left;
    Node *right;
};
Node *newNode(int value)
{
    Node *node = new Node;
    node->data = value;
    node->left = node->right = NULL;
    return node;
}
void inOrder(Node *root)
{
    if (root == NULL)
        return;
    inOrder(root->left);
    cout << root->data << " ";
    inOrder(root->right);
}

int main()
{
    Node *root = newNode(50);
    root->left = newNode(30);
    root->right = newNode(70);
    root->left->left = newNode(20);
    root->left->right = newNode(40);
    root->right->left = newNode(60);
    root->right->right = newNode(80);

    cout << "In order traversal of the binary search tree is: \n";
    inOrder(root);
    cout << "\n";

    return 0;
}
