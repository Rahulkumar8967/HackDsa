#include <bits/stdc++.h>
using namespace std;
// Doubly Linklist
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

Node *DeleteFront(Node *&head)
{
    if (head == nullptr || head->next == nullptr)
    {
        delete head;
        return nullptr;
    }
    Node *temp = head;
    head = head->next;
    head->back = nullptr;
    delete temp;
    return head;
}

Node *InsertFront(Node *&head, int val)
{
    Node *newnode = new Node(val, head, nullptr);
    if (head != nullptr)
    {
        head->back = newnode;
        newnode->next = head;
       
    }
    head = newnode; 
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
    int n, data, choice = 0;
    while (choice != 4)
    {
        cout << "1. for inserting elements at the beginning of the linked list" << endl;
        cout << "2. for deleting elements from the beginning of the linked list" << endl;
        cout << "3. for displaying the linked list" << endl;
        cout << "4. for exiting the program" << endl;
        cout << "Enter the choice you want: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of values to be inserted at the beginning of the linked list: ";
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                cout << "Enter the value to be inserted: ";
                cin >> data;
                InsertFront(head, data);
            }
            break;

        case 2:
            cout << "Deleting from the beginning of the linked list" << endl;
            DeleteFront(head);
            break;

        case 3:
            cout << "Displaying the linked list: ";
            printLL(head);
            break;

        case 4:
            cout << "Exiting the program" << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }

    return 0;
}
