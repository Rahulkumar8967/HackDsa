#include<bits/stdc++.h>
using namespace std;

void deleteNode(Node* &tail, int value){
    if(tail == NULL){
        return NULL;
    }
  Node* prev = tail;
  Node* curr = prev->next;
  while(curr ->data != value){
    curr = curr->next;
  }
  prev->next = curr ->next;
  curr ->next = NULL;
  delete curr;
}

int main(){


}