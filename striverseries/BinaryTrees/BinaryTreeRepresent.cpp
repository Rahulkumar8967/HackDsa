#include <iostream>
#include <vector>
#include <queue>
using namespace std;

class Node
{
public:
    int data;
    Node *left, *right;
    Node()
    {
        this->data = 0;
        left = NULL;
        right = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
    Node(int data, Node *left, Node *right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }
};

Node *createTree(vector<int> &arr)
{
    if (arr.empty())
        return NULL;

    Node *root = new Node(arr[0]);

    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    int i = 1;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";

            if (i < arr.size() && arr[i] != -1)
            {
                temp->left = new Node(arr[i]);
                q.push(temp->left);
            }
            i++;

            if (i < arr.size() && arr[i] != -1)
            {
                temp->right = new Node(arr[i]);
                q.push(temp->right);
            }
            i++;
        }
    }
}

int main()
{
    vector<int> arr = {11, 22, 3, 54, 15, 23, 21};
    createTree(arr);
    return 0;
}
