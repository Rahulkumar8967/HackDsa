#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int val){
        this->data = val;
        this->next = NULL;
    }
};

class Stack{
    Node *head;
    int size;

    public:
    Stack(){
        head = NULL;
        size = 0;
    }


    void push(int data){
        Node* newNode = new Node(data);
         newNode->next  = head;
        head = newNode;
        size++;
    }

    void POP(){
        if(head == NULL){
            return;
        }
        Node* temp = head;
        head = head->next;
        delete temp;
        size--;
        }

        int getTop(){
            if(head != NULL){
                return head->data;
                
            }
            return -1;
        }

        void display()
        {
            Node* temp = head;
            while (temp != NULL)
            {
                cout << temp->data << " ";
                temp = temp->next;
            }
            cout << endl;
        }
};
int main(){

    Stack s;
    s.push(11);
    s.push(22);
    s.push(33);
    s.push(44);
    s.push(55);

s.display();
cout << "Top elelment is: " << s.getTop() << endl;

s.push(66);
cout << "Display top elements is " << s.getTop() << endl;

s.POP();
s.POP();

cout << "Top element is " << s.getTop() << endl;

return 0;
}