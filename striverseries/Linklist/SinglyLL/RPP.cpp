#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};
// Function to print the linked list
void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}
Node* removesHead(Node* head) {
    if (head == NULL)
        return head;
    Node* temp = head;  
    head = head->next;

    delete temp;
   
    return head;
}
int main() {
    Node* head = new Node(12);
    head->next = new Node(5);
    head->next->next = new Node(8);
    head->next->next->next = new Node(7);
   
    head = removesHead(head);

    printLL(head);    
    return 0;
}