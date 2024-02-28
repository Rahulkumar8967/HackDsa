// OBJECTIVE - Write a program to implement STACK using linear array.
#include<iostream>
using namespace std;
const int MAX_SIZE = 5;
int stack[MAX_SIZE], top = -1;

void push(int val){
    if(top >= MAX_SIZE-1){
        cout<<"Stack Overflow "<<endl;
    }else{
        top++;
       stack[top] = val;
    }
}
void pop(){
    if(top <= -1){
        cout<<"stack underflow "<<endl;
    }else{
        cout<<"Popup element is "<<stack[top]<<endl;
        top--;
    }
}
void display(){
    if(top >= 0){
        cout<<"stack elements are "<<endl;
        for(int i = top; i>=0; i--){
           cout<< stack[i]<<" ";
        }
        cout<<endl;
    }
    else{
            cout<<"stack is empty "<<endl;
        }
}

int main(){
int ch,val ;
do{
   cout << "Your available choices" << endl
             << "1. Push in Stack." << endl
             << "2. Pop from Stack." << endl
             << "3. Display Stack." << endl
             << "4. Exit" << endl;

cout <<"Enter your choice "<<endl;
cin >> ch;
switch(ch){

case 1:
cout<<"Enter your value to be pushed "<<endl;
cin >> val;
push(val);
break;

case 2:
pop();
break;

case 3:
display();
break;

case 4: 
  cout << "Exit" << endl;
break;

 default:
cout<<"Invalid choice "<<endl;
break;
}
}
while(ch != 4);
    return 0;
}