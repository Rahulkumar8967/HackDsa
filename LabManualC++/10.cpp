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

Node *insertAfterValue(Node *head, int el, int val)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == val)
        {
            // Create a new node with the value el
            Node *newNode = new Node(el);
            // Set the next pointer of the new node to the next pointer of temp
            newNode->next = temp->next;
            // Set the next pointer of temp to the new node
            temp->next = newNode;
            break;
        }
        temp = temp->next;
    }
    return head;
}

int main()
{
    int val = 7 ;
    Node *head = new Node(5);
    head->next = new Node(7);
    head->next->next = new Node(8);
    head->next->next->next = new Node(9);
    head = insertAfterValue(head, 6, val);
    printLL(head);

    return 0;
}
