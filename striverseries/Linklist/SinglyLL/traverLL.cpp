#include<bits/stdc++.h>
using namespace std;
// traverse LL only
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
    next = NULL;
}

};

void traverseLL(Node* head){
Node* temp = head;
while(temp != NULL){
    cout<<temp->data<<" ";
    temp = temp->next;
}
}
int main(){
Node* head = new Node(1);
head->next = new Node(2);
head->next->next = new Node(3);
head->next->next->next = new Node(4);
head->next->next->next->next = new Node(5);

traverseLL(head);
    return 0;
}