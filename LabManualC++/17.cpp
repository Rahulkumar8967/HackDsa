#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *back;

    Node(int data1, Node *next1, Node *back1)
    {
        data = data1;
        next = next1;
        back = back1;
    }
    Node(int data1)
    {
        data = data1;
        next = nullptr;
        back = nullptr;
    }
};

void InsertAtFront(Node *&head, int data)
{
    Node *newNode = new Node(data);

    if (head == nullptr)
    {
        head = newNode;
        newNode->next = head;
        return;
    }
    Node *tail = head;
    while (tail->next != head)
    {
        tail = tail->next;
    }
    tail->next = newNode;
    newNode->next = head;
    head = newNode;
}

Node *DeleteAtFront(Node *&head)
{
    if (head == nullptr)
    {
        return nullptr;
    }

    Node *tail = head;
    while (tail->next != head)
    {
        tail = tail->next;
    }

    Node *temp = head;
    head = head->next;
    tail->next = head;
    delete temp;
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
         do
        {
            cout << temp->data << " ->";
            temp = temp->next;
        } while (temp != head);
    }

int main()
{
    Node *head = nullptr;
    int choice = 0;
    while (choice != 4)
    {
        cout << "1. Insert elements at the Front of the linked list" << endl;
        cout << "2. Delete elements from the Front of the linked list" << endl;
        cout << "3. Display the linked list" << endl;
        cout << "4. Exit the program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int n, data;
            cout << "Enter the number of values to be inserted at the front: ";
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                cout << "Enter the value to be inserted: ";
                cin >> data;
                InsertAtFront(head, data);
            }
            break;
        }
        case 2:
        {
            cout << "Deleting the Front of the linked list" << endl;
            DeleteAtFront(head);
            break;
        }
        case 3:
        {
            cout << "Linked list: ";
            printLL(head);
            cout << endl;
            break;
        }
        case 4:
        {
            cout << "Exiting the program" << endl;
            break;
        }
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}
