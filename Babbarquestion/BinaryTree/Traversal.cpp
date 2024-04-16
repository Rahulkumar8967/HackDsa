#include<bits/stdc++.h>
using namespace std;

// without recursion Inorder Preorder Postorder
// --------->
// build from level order
class node
{
public:
    int data;
    node *left;
    node *right;

    node(int d)
    {
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

node *buildTree()
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        return NULL;
    }

    node *root = new node(data);
    cout << "Enter the data for inserting in left of " << data << endl;
    root->left = buildTree();
    cout << "Enter the data for inserting in right of " << data << endl;
    root->right = buildTree();
    return root;
}

void Inorder(node* root){
    // base case
    if(root == NULL){
        return;
    }
    Inorder(root->left);
    cout<< root->data<<" ";
    Inorder(root->right);
}

void Preorder(node* root){
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(node *root)
{
    if (root == NULL)
    {
        return;
    }

    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}

int main(){
    node *root = NULL;

    // creating a tree
    root = buildTree();

    
    cout << "Inorder traversal is :";
    Inorder(root);
    cout << endl;

    cout << "Preorder traversal is :";
    Preorder(root);
    cout << endl;

    cout << "Postorder traversal is :";
    Postorder(root);
    cout << endl;

    return 0;
}