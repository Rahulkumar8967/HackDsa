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
    data  = data1;
    next = nullptr;
  }
};
Node* convertArr2LL(vector<int> arr){
          if (arr.empty())
        return nullptr;
  Node* head = new Node(arr[0]);
  Node* mover = head;
  for(int i=1;i<arr.size();i++){
    Node* temp = new Node(arr[i]);
     mover->next =  temp;
    mover = temp; 
  }
  return head;
}
void printLL(Node* head){
    while (head != NULL) {
   cout<<head->data<<" ";
   head = head->next;
    } 
}
Node* deletionVal(Node* head, int el){
    if(head == NULL)   return NULL;
    if(head->data == el){
          Node* temp = head;
    head = head->next;
    delete temp;
    return head;
    } 
     Node* temp = head;
     Node* prev = NULL;
     while(temp != NULL){
        if(temp->data == el){
            prev->next = prev->next->next;
            free(temp);
            break;
        }
        prev = temp;
        temp = temp->next;
     }
     return head;
}

int main(){
vector<int> arr = {2,5,6,8};
Node* head = convertArr2LL(arr);

    head =  deletionVal(head,8);    
printLL(head);
    return 0;
}