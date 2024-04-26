#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int data)
    {
        val = data;
        next = NULL;
    }
};

class circularLL
{
public:
    Node *head;

    circularLL()
    {
        head = NULL;
    }

    void display()
    {
        if (head == NULL)
        {
            cout << "Empty Circular Linked List" << endl;
            return;
        }

        Node *temp = head;
        do
        {
            cout << temp->val << "->";
            temp = temp->next;
        } while (temp != head);
        cout << endl;
    }

    void printCircularLL()
    {
        Node *temp = head;
        for (int i = 0; i < 20; i++)
        {
            cout << temp->val << "->";
            temp = temp->next;
        }
        cout << endl;
    }

   
         
    void InsertAtStart(int val)
    {
        Node *newNode = new Node(val);

        if (head == NULL)
        {
            head = newNode;
            newNode->next = head; // circular LL
            return;
        }

        Node *tail = head;
        while (tail->next != head)
        {
            tail = tail->next;
        }

        // now tail is pointing to the last node
        tail->next = newNode;
        newNode->next = head;
        head = newNode;
    }

    void insertAtEnd(int val){

        Node* newNode = new Node(val);

        if(head == NULL){
            head = newNode;
            newNode->next = head; // circular LL
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

    void deleteStart(){
        if(head == NULL){
            return;
        }
      
        Node *tail = head;
        while(tail->next != head){
            tail = tail->next;
        }
        head = head->next;
        tail->next = head;
    }

    void deleteAtEnd(){
        if(head == NULL){
            return;
        }
        Node *tail = head;
        while(tail->next->next != head){
            tail = tail->next;
        }
        Node *temp = tail->next;
        tail->next = head;
        free(temp);

    }
};

int main()
{

    circularLL cll;
    cll.InsertAtStart(3);
    cll.InsertAtStart(4);
    cll.InsertAtStart(5);
    cll.InsertAtStart(6);
    cll.display();

    cll.printCircularLL();

    cll.insertAtEnd(8);
    cll.display();

    cll.deleteStart();
    cll.display();

    cll.deleteAtEnd();
    cll.display();

    return 0;
}
