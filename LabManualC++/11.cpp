#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node(int data1, Node *next1)
    {
        data = data1;
        next = next1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

void printLL(Node *head)
{
    while (head != nullptr)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

Node *deleteValue(Node *head, int val)
{
    // Check if the list is empty
    if (head == nullptr)
        return nullptr;

    // If the first node has the value to be deleted
    if (head->data == val)
    {
        Node *temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    // Traverse the list to find the node to delete
    Node *temp = head;
    Node *prev = nullptr;
    while (temp != nullptr)
    {
        if (temp->data == val)
        {
           
            if (prev != nullptr)
                prev->next = temp->next;
            delete temp;
            break;
        }
        // Move to the next node
        prev = temp;
        temp = temp->next;
    }

    return head;
}

int main()
{
    int val = 7;
    Node *head = new Node(5);
    head->next = new Node(7);
    head->next->next = new Node(8);
    head->next->next->next = new Node(9);
    head = deleteValue(head, val);
    printLL(head);

    return 0;
}
