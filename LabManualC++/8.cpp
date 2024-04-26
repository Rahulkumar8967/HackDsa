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

Node *insertAtHead(Node *&head, int val)
{
    return head = new Node(val, head);
}

void display(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node *head = nullptr;
    int val, n, choice = 0; // Initialize choice

    while (choice != 3)
    {

        cout << "1. Inserting the value of the linklist" << endl;
        cout << "2. Display the linklist " << endl;
        cout << "3. Exit from program" << endl;

        cout << "Enter your choice" << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter no.of Value to be inserting" << endl;
            cin >> n;
            for (int i = 0; i < n; i++)
            {
                cin >> val;
                insertAtHead(head, val);
            }
            break;

        case 2:
            cout << "The Linked List is :- " << endl;
            display(head);
            cout << endl;
            break;
        case 3:
            cout << "Exiting!!" << endl;
            break;
        default:
            cout << "Invalid Choice" << endl;
        }
    }

    return 0;
}
