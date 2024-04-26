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

Node *insertAtTail(Node *&head, int val)
{
    if (head == NULL)
    {
        head = new Node(val); // Update head pointer if list is empty
        return head;
    }
   Node *temp = head;
   while(temp->next != NULL){
       temp = temp->next;
   }
   Node* newNode = new Node(val);
   temp->next = newNode;
   return head;
}

void display(Node *head)
{
    Node *temp = head;
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
   // cout << "NULL" << endl;
}

int main()
{

    Node *head = nullptr;
    int val, n, choice = 0; // Initialize choice

    while (choice != 3)
    {

        cout << "1. Inserting the value of the linklist in the end" << endl;
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
                insertAtTail(head, val);
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
