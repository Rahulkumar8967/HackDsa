#include <iostream>
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

// insertion in doubly linklist
Node *insertgivenVal(Node *head, int val)
{
    Node *newNode = new Node(val);
    if (head == nullptr)
    {
        head = newNode;
    }
    else
    {
        newNode->next = head;
        head->back = newNode;
        head = newNode;
    }
    return head;
}

// deletion in doubly linklist
Node *deletegivenVal(Node *head, int val)
{
    if (head == nullptr)
    {
        cout << "List is empty. Nothing to delete." << endl;
        return nullptr;
    }

    Node *temp = head;
    while (temp != nullptr)
    {
        if (temp->data == val)
        {
            if (temp == head)
            {
                head = temp->next;
                if (head != nullptr)
                    head->back = nullptr;
                delete temp;
                return head;
            }
            else
            {
                temp->back->next = temp->next;
                if (temp->next != nullptr)
                    temp->next->back = temp->back;
                delete temp;
                return head;
            }
        }
        temp = temp->next;
    }
    cout << "Value not found in the list." << endl;
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
        cout << "1. for inserting elements at the given of the linked list" << endl;
        cout << "2. for deleting elements from the given of the linked list" << endl;
        cout << "3. for displaying the linked list" << endl;
        cout << "4. for exiting the program" << endl;
        cout << "Enter the choice you want: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter the number of values to be inserted at the given of the linked list: ";
            cin >> n;
            for (int i = 0; i < n; ++i)
            {
                cout << "Enter the value to be inserted: ";
                cin >> data;
                head = insertgivenVal(head, data);
            }
            break;

        case 2:
            cout << "Enter the value to be deleted: ";
            cin >> data;
            head = deletegivenVal(head, data);
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
