#include<bits/stdc++.h>
using namespace std;

int queue[100], n = 100;
int front , rear = -1;

void insert(){
    int val;
if(rear == n-1){
cout<<"Queue Overflow "<<endl;
}else{
if(front = -1)  front = 0;
cout<<"Enter value to be inserted "<<endl;
cin >> val;
rear++;
queue[rear] = val;
 }
}

void delete(){
if(front == -1 || front > rear){

}else{

}

}

void display(){
if(front == -1){
    cout<<"Queue is empty "<<endl;
}else{
    cout<<"Queue element are "<<" ";
    for(int i=front;i<=rear;i++){
        cout<<queue[i]<<" ";
    }
    cout<<endl;
}

}



int main(){
int  choice;
while (choice != 4){
    cout<<"Insert element in Queue "<<endl;
     cout<<"Delete element in Queue "<<endl;
      cout<<"Display element of Queue "<<endl; 
      cout<<"Exit"<<endl;
      cout<<"Enter what is the choice you want "<<end;
      cin >> choice;
   switch (choice){
   case 1:
    insert();
    break;

    case 2:
   delete();
    break;

    case 3:
    display();
    break;

     case 4:
   cout<<"Exit from the program "<<endl;
    break;
   
   default:
    cout<<" your Invalid choice!!!!! "<<endl;
    break;

   }
}



    return 0;
}