#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node* back;
  Node(int data1, Node* next1, Node* back1){
    data = data1;
    next = next1;
    back = back1;

  }
  public:
  Node(int data1){
    data  = data1;
    next = nullptr;
  }
};

Node* convertArr2DLL(vector<int>& arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1;i<=arr.size()-1;i++){
         Node* temp = new Node(arr[i], nullptr, prev);
         prev->next = temp;
         prev = temp;
    }
    return head;
}
Node * deleteHead(Node *head) {
    if(head == NULL || head->next ==NULL){
        return NULL;
    }
    Node* prev = head;
    head = head->next;
    head->back = nullptr;
    prev->next = nullptr;
    delete prev;
    return head;
}
Node* deleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* prev = tail->back;
      prev->next = NULL;
    tail->back = NULL;
    delete tail;
    return head;
}
Node* deletekthNode(Node* head, int k){
      if(head==NULL){
        return NULL;
    }
 if (k == 1) { // Deleting the head node
        return deleteHead(head);
    }

    int count = 1;
    Node* kNode = head;
    while(kNode!=NULL){
        if(count==k){
            break;
        }
        count++;
        kNode = kNode->next;
    }
    Node* prev = kNode->back;
    Node* front = kNode->next;
    
    if(prev==NULL && front == NULL){
        delete kNode;
        return NULL;
    }
    else if (prev==NULL){
        return deleteHead(head);
    }
   else if(front == NULL){
        return deleteTail(head);
    }
    
    prev->next = front;
    front->back = prev;
    
    kNode->next = NULL;
    kNode->back = NULL;
    
    delete kNode;
    return head;
}
Node* printDLL(Node* head){
  while(head != NULL){
    cout<<head->data<<" ";
    head = head->next;
  }
}
int main(){
vector<int> arr = {12,5,6,8,0};
Node* head = convertArr2DLL(arr);
    head = deletekthNode(head, 5);
    printDLL(head);
return 0;
}