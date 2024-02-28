#include<bits/stdc++.h>
using namespace std;

int main(){
stack<int> s;

s.push(3);
s.push(4);
s.push(5);
s.push(6);
s.push(7);
s.push(8);

s.pop();
cout<<"Top element is "<<s.top()<<endl;

if(s.empty()){
    cout<<"stack is empty ";
}else{
cout<<"stack is not empty ";
}




}