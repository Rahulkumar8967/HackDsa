#include<bits/stdc++.h>
using namespace std;

class Node{
public:
int data;
Node* next;

Node(int data1, Node* next1){
    data = data1;
    next = next1;
}
Node(int data1){
data = data1;
next = nullptr;
}
};

Node* insertHead(Node* head, int val){
    Node* temp = new Node(val, head);
    return temp;
}

void printLL(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}


int main(){
    int val = 100;
Node* head = new Node(4);
head->next = new Node(5);
head->next->next = new Node(6);
head->next->next->next = new Node(7);
head = insertHead(head,val);
printLL(head);

    return 0;

}