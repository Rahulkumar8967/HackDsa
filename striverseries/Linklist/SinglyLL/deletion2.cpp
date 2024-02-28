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

Node* deleteKElement(Node* head, int k){
if(head == NULL) return head;
if(k == 1){
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}
int cnt= 0;
Node* prev = head;
 Node* temp = head;
 while(temp != NULL){
    cnt++;
    if(cnt == k){
        prev->next = temp->next;
        delete temp;
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
// head =  removesHead(head);
   //  head =  removeTail(head);    
    head =  deleteKElement(head,1);    
printLL(head);
    return 0;
}