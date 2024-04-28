#include <iostream>
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

// insert in circular linklist
Node *InsertgivenVal(Node *&head, int data)
{
    if (head == nullptr)
    {
        head = new Node(data);
        head->next = head; // Point to itself to form a circular list
    }
    else
    {
        Node *newNode = new Node(data, head->next);
        head->next = newNode;
    }
    return head;
}

// delete in circular linklist
Node *DeletegivenVal(Node *&head)
{
    if (head == nullptr)
    {
        cout << "List is empty. Nothing to delete." << endl;
        return nullptr;
    }
    else if (head->next == head)
    {
        // Only one node in the list
        delete head;
        head = nullptr;
    }
    else
    {
        Node *temp = head->next;
        head->data = temp->data;
        head->next = temp->next;
        delete temp;
    }
    return head;
}

void printLL(Node *head)
{
    if (head == nullptr)
    {
        cout << "List is empty." << endl;
        return;
    }

    Node *temp = head;
    do
    {
        cout << temp->data << " -> ";
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
            int number, data;
            cout << "Enter the number of values to be inserted at the front: ";
            cin >> number;
            for (int i = 0; i < number; ++i)
            {
                cout << "Enter the value to be inserted: ";
                cin >> data;
                InsertgivenVal(head, data);
            }
            break;
        }
        case 2:
        {
            cout << "Deleting the Front of the linked list" << endl;
            DeletegivenVal(head);
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
