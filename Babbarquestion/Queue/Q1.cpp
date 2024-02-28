#include<bits/stdc++.h>
using namespace std;


int main(){

queue<int> q;
q.push(4);
q.push(5);
q.push(8);
q.push(10);

cout<<"front is "<< q.front()<<endl;
q.pop();
cout<<"front is "<< q.front()<<endl;

if(q.empty()){
    cout<<"Queue is empty ";
}else{
    cout<<"Queue is not empty ";
}
cout<<"Size of Queue is "<<q.size();
    return 0;
}