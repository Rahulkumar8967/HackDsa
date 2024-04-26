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

Node* insertAtTail(Node* head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        return newNode;
    }
    Node* temp = head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

void printLL(Node* head){
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    } 
}

int main(){
    Node* head = NULL; 
    int x;
    while(x != 3){
        cout << "Enter 1 for inserting at tail of linklist" << endl;
        cout << "Enter 2 for display of linklist" << endl;
        cout << "Enter 3 for Exit" << endl;
        cin >> x;

        switch(x){
            case 1: {
                int n, data;
                cout << "Enter no. of values to be inserted: ";
                cin >> n;
                cout << "Enter values: ";
                for(int i = 0; i<n; i++){
                    cin >> data;
                    head = insertAtTail(head, data);
                }
                break;
            }
            case 2:
                cout << "The linklist is: ";
                printLL(head);
                cout << endl;
                break;
            case 3: 
                break;
            default:
                cout << "Invalid choice!" << endl;
        }
    }
    return 0;
}
