#include<iostream>
#include<stack>
using namespace std;
int main(){
    // first wala last output
    stack<string> s;
    s.push("Rahul");
    s.push("Kumar");
    s.push("Saini");

    cout<<"Top Element "<<s.top()<<endl;
    s.pop();
    cout<<"Top Element "<<s.top()<<endl;
    cout<<"Size of stack"<<s.size()<<endl;

    cout<<"Empty or not"<<s.empty()<<endl;
}