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


void enQueue(){   // element push karne h
  Node* temp = new Node(x);
   if( rear == NULL){
      front = temp;
       rear = temp;
   }else{
       rear->next = temp;
       rear = temp;
   }
}


void deQueue(){  // pop
  if(front == rear && front == NULL){
     return -1;
     }else{
    if(front == rear){ 
        int ans = front->data;
     front = rear = NULL;
     return ans;
}else{
int ans = front->data;
front = front->next;
return ans;
     }
   }

}

void display(){
  queue* temp;
  if(front == NULL){
   cout<<"queue Underflow "<<endl;
  }else{

    temp* front;
    while (temp != NULL)
    {
     cout<<temp->data<<endl;
     temp = temp->next;
   
    }
    
  }


}



int main(){
queue q;
q.enQueue(10);
q.enQueue(20);
q.display();
q.deQueue();
cout<<"deQueue after One elements"<<endl;
q.display();
q.enQueue(30);
q.enQueue(40);
q.enQueue(50);
cout<<"Queue after three elements "<<endl;
q.display();

// front 

cout<<q.front()<<endl;

//rear
cout<<q.rear()<<endl;

q.deQueue();
q.deQueue();
q.display();

cout<<q.front()<<endl;
cout<<q.rear<<endl;



    return 0;
}