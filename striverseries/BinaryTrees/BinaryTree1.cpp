#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = right = NULL;
    }
};

// just an example of inorder traversal  in DFS(Depth first search)
void inorder(Node *root)    //T.c -> O(n), S.c -> O(1)
{
    if (root == NULL)
        return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void Preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";   
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node *root)
{
    if (root == NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);

    root->left->right = new Node(5);

    cout << "Inorder traversal of the binary tree: ";
    inorder(root);
    cout << endl;

    cout << "Preorder traversal of the binary tree: ";
    Preorder(root);
    cout << endl;

    cout << "Postorder traversal of the binary tree: " ;
    Postorder(root);
    cout << endl;

    return 0;
}
