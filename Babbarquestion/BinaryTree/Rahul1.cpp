#include <iostream>
#include <queue>
using namespace std;

// reverse level order traversal
// Inorder / preorder / postorder
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

void levelOrderTraversal(node *root)
{
    queue<node *> q;
    q.push(root);
    q.push(NULL);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        { // purana level complete ho chuka hai
            cout << endl;
            if (!q.empty())
            { // queue has still some child nodes
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (temp->left)
            {
                q.push(temp->left);
            }
            if (temp->right)
            {
                q.push(temp->right);
            }
        }
    }
}

int main()
{
    node *root = NULL;

    // creating a tree
    root = buildTree();

    cout << "printing the level order traversal output " << endl;
    levelOrderTraversal(root);

    return 0;
}
