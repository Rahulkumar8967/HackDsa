#include<bits/stdc++.h>
using namespace std;

class Stack {
public:
int *arr;
int size;
int top;

Stack(int size){
    this->size = size;
    arr = new int[size];
    top = -1;
}

void push(int element){
if(size- top >1){  // or  if(!isFull()) 
    top++;
    arr[top] = element;
}else{
    cout<<"stack is empty "<<endl;
}
}
void pop(){  // if(!isEmpty())
    if(top >=0){
        top--;

    }else{
        cout<<"stack is underflow "<<endl;
    }
}

int peek(){
    if(top >= 0){
    return arr[top];
    }else{
        return -1;
    }
}

bool isempty(){
  if(top == -1)  return 1 ;
  else return 0;
}

};
int main(){

Stack st(5);
st.push(3);
st.push(4);
st.push(5);
st.push(6);

cout<< st.peek();
cout<<endl;
st.pop();

cout<<st.peek();

cout<<endl;
if(!st.isempty()){
    cout<<"stack is not empty ";
}else{
    cout<<"stack is empty ";
}
    return 0;
}