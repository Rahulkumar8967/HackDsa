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

void printLL(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
}

Node* deleteK(Node* head, int k) {
    if (head == NULL)
        return head;
    if (k == 1) {
        Node* temp = head;
        head = head->next;
        delete (temp);
        return head;
    }

    Node* temp = head;
    Node* prev = NULL;
    int cnt = 0;

    while (temp != NULL) {
        cnt++;
        if (cnt == k) {
            prev->next = prev->next->next;
            delete temp;
            break;
        }
        prev = temp;
        temp = temp->next;
    }

    return head;
}

int main() {
    
    int k = 2;
    Node* head = new Node(5);
    head->next = new Node(7);
    head->next->next = new Node(8);
        head->next->next->next = new Node(9);
    head = deleteK(head, k);
    printLL(head);

    return 0;
}