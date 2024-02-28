#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

void insert(Node* &head, int val)
{
    Node *newN = new Node(val);
    if(head == NULL){
        head = newN;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = newN;
} 

void printLL(Node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void search_insert(Node *&head, int key)
{
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            int val;
            cout << "Key is present " << endl;
            cout << "Enter new element to be inserted: ";
            cin >> val;
            Node *newNode = new Node(val);
            newNode->next = temp->next;
            temp->next = newNode;
            return;
        }
        temp = temp->next;
    }
    cout << "Key is not found " << endl;
}

int main()
{
    int x, el;
    Node* head = NULL;
    insert(head, 21);
    insert(head, 20);
    insert(head, 19);
    insert(head, 18);
    insert(head, 17);

    printLL(head);
    while (x != 3)
    {
        cout << "\nEnter 1 for insert and searching purpose" << endl;
        cout << "Enter 2 for display" << endl;
        cout << "Enter 3 for Exit" << endl;
        cin >> x;

        switch (x)
        {
        case 1:
            cout << "Enter element to be searched: ";
            cin >> el;
            search_insert(head, el);
            break;

        case 2:
            cout << "The linked list is: ";
            printLL(head);
            cout << endl;
            break;

        case 3:
            cout << "Exit" << endl;
            break;

        default:
            cout << "Bad choice" << endl;
            break;
        }
    }
    return 0;
}



