#include <iostream>
#include <vector>

using namespace std;

// TreeNode structure definition

class TreeNode
{
public:
    int data;
    TreeNode *left, *right;
    TreeNode() : data(0), left(NULL), right(NULL) {}
    TreeNode(int x) : data(x), left(NULL), right(NULL) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {}
};

// Function definitions for tree traversals

void preOrder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    ans.push_back(root->data);
    preOrder(root->left, ans);
    preOrder(root->right, ans);
}

void inOrder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    inOrder(root->left, ans);
    ans.push_back(root->data);
    inOrder(root->right, ans);
}

void postOrder(TreeNode *root, vector<int> &ans)
{
    if (root == NULL)
    {
        return;
    }
    postOrder(root->left, ans);
    postOrder(root->right, ans);
    ans.push_back(root->data);
}

vector<vector<int>> getTreeTraversal(TreeNode *root)
{
    vector<int> preTraversal;
    vector<int> inTraversal;
    vector<int> postTraversal;

    // Recursive function call
    preOrder(root, preTraversal);
    inOrder(root, inTraversal);
    postOrder(root, postTraversal);

    // push into ans vector
    vector<vector<int>> ans;
    ans.push_back(inTraversal);
    ans.push_back(preTraversal);
    ans.push_back(postTraversal);
    return ans;
}

int main()
{
    // Create a sample binary tree
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Get the tree traversals
    vector<vector<int>> traversals = getTreeTraversal(root);

    // Print the traversals
    cout << "Inorder traversal: ";
    for (int val : traversals[0])
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "Preorder traversal: ";
    for (int val : traversals[1])
    {
        cout << val << " ";
    }
    cout << endl;

    cout << "Postorder traversal: ";
    for (int val : traversals[2])
    {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
