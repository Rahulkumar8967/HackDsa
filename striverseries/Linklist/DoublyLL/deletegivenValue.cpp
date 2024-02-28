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
  void DeleteGivenNode(Node* temp) {
    Node* prev = temp->back;
    Node* front = temp->next;
    if(front == NULL){
        prev->next = nullptr;
        temp->back = nullptr;
        free(temp);
        return;
    }
    prev->next = front;
    front->back = prev;
    temp->next = temp->back = nullptr;
    free(temp);
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
   DeleteGivenNode(head->next->next);
    printDLL(head);
return 0;
}