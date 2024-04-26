#include <bits/stdc++.h>
using namespace std;
// template for circular linklist
class Node
{
public:
    int data;
    Node *next;

    Node(int data1)
    {
        data = data1;
        next = nullptr;
    }
};

class CircularLL
{
public:
    Node *head;

public:
    CircularLL()
    {
        head = NULL;
    }

    void InsertAtEnd(int data)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
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
    }

    void DeleteAtEnd()
    {
        if (head == NULL)
            return;
        Node *tail = head;
        while (tail->next->next != NULL)
        {
            tail = tail->next;
        }
        Node *temp = tail->next;
        tail->next = head;
        free(temp);
    }

    void display()
    {
        if (head == nullptr)
        {
            cout << "List is empty!" << endl;
            return;
        }

        Node *temp = head;
        do
        {
            cout << temp->data << "-> ";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }
};

int main()
{
    CircularLL l1;
    int data, n, choice;

    while (choice != 4)
    {
        cout << "Enter 1. for inserting at end in circularLL" << endl;
        cout << "Enter 2. for delete at the end of the linklist" << endl;
        cout << "Enter 3. for Display of the linklist" << endl;
        cout << "Enter 4 to Exit" << endl;

        cout << "Enter your choice" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of value to be inserted" << endl;
            cin >> n;

            cout << "Enter Value:";
            for (int i = 0; i < n; i++)
            {
                cin >> data;
                l1.InsertAtEnd(data);
            }
            break;

        case 2:
            cout << "Deleting the end of the linked list" << endl;
            l1.DeleteAtEnd();
            break;

        case 3:
            cout << "Display the elemnets of LL" << endl;
            l1.display();
            break;

        case 4:
            cout << "Exit to the program" << endl;
            break;

        default:
            cout << "Invalid choice" << endl;
            break;
        }
    }

    return 0;
}