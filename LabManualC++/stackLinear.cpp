#include<bits/stdc++.h>
using namespace std;
int st[5], n = 5, top = -1;
void push(int val){
if(top >= n-1){
    cout<<"Stack Overflow "<<endl;
 }else{
    top++;
    st[top] = val;
 }
}
void pop(){
if(top <= -1){
    cout<<"Stack underflow "<<endl;
}else{
    cout<<"Popping element is "<<st[top]<<endl;
    top--;
 }
}
void display(){
if(top >= 0){
    for(int i =top;i>=0;i--){
        cout<<st[i]<<" ";
    }
    cout<<endl;
}else{
    cout<<"Stack is empty "<<endl;
 }
}

int main(){
    int val, choice;
    while(choice != 4){
        cout<<"Your choice given below:"<<endl
        <<"1 for push in stack "<<endl
        <<"2 for pop in stack "<<endl
        <<"3 for display stack "<<endl
        <<"4 for Exit "<<endl;
        cout<<"Enter your choice ";
        cin >> choice;
        switch(choice){
    case 1:
          cout<<"Enter the value to be pushed in stack ";
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
                cout << "Bad choice" << endl;
                break;
        }

    }
    return 0;
}