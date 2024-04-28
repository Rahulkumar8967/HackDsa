#include <iostream>
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

Node *DeleteTail(Node *head)
{
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *prev = tail->back;
    prev->next = nullptr;
    delete tail;
    return head;
}

Node *InsertTail(Node *head, int val)
{
    if (head == nullptr)
    {
        return new Node(val);
    }
    Node *tail = head;
    while (tail->next != nullptr)
    {
        tail = tail->next;
    }
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->back = tail;
    return head;
}

void printLL(Node *head)
{
    Node *temp = head;
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}


int main()
{
    Node *head = nullptr;
    int choice = 0;
    while (choice != 4)
    {
        cout << "1. Insert elements at the end of the linked list" << endl;
        cout << "2. Delete elements from the end of the linked list" << endl;
        cout << "3. Display the linked list" << endl;
        cout << "4. Exit the program" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
        {
            int n, data;
            cout << "Enter the number of values to be inserted at the end: ";
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                cout << "Enter the value to be inserted: ";
                cin >> data;
                head = InsertTail(head, data);
            }
            break;
        }
        case 2:
        {
            cout << "Deleting the end of the linked list" << endl;
            head = DeleteTail(head);
            break;
        }
        case 3:
        {
            cout << "Linked list: ";
            printLL(head);
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
