#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node* next;

    // constructor
    Node(int d){
        this->data = d;
        this->next = nullptr;
    }

    ~Node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
            next = NULL;
        }
cout<<"memory is free for node with data "<< value <<endl;
    }
};

void insertNode(Node* &tail, int element, int d){
 // empty list
 if(tali == NULL){
    Node* newNode = new Node(d);
    tail = newNode;
    newNode->next = newNode;
 }else{
    // non - empty list
    // assuming that element are present in the list
    Node* curr = tail;
    while(curr->data != element){
        curr = curr->next;
    }
    Node* temp = new Node(d);
    temp->next = curr->next;
    curr->next = temp;
 }
}

int main(){



    return 0;
}