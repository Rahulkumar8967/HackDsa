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

Node *DeleteFront(Node *head)
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

Node *InsertFront(Node *head, int val)
{
    Node *newnode = new Node(val, head, nullptr);
    if (head != nullptr)
    {
        head->back = newnode;
    }
    return newnode;
}
void printLL(Node* head){
    Node *temp = head;
    while(head != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

    int
    main()
{
    Node *head = nullptr;
    int n, data, choice = 0;
    while (choice != 3)
    {
        cout << "1. for inserting the elements in front of linklist" << endl;
        cout << "2. for Deleting the elements in front of linklist" << endl;
        cout << "3. for display the linklist" << endl;
        cout << "4. for Exit the Program !!!" << endl;
        
        cout << "Enter the choice you want" << endl;
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the no. of value to be inserted At Begining of Linklist" << endl;
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                cout << "Enter the value to be inserted" << endl;
                cin >> data;
                head = InsertFront(head, data);
            }
            break;

        case 2:
            cout << "Deleting the Linklist" << endl;
            head = DeleteFront(head);
            break;


        case 3:
           printLL(head);
           break;
        case 4:
            cout << "Exit from the Program" << endl;
            break;

        default:
            cout << "Invalid Choice" << endl;
            break;
        }
    }

    return 0;
}
