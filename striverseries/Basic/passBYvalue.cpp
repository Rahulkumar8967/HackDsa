#include<iostream>
using namespace std;

void doSomethig(int num){
cout<<num<<endl;
num += 5;
cout<<num<<endl;

num += 5;
cout<<num<<endl;
}
int main(){

int num = 10;

doSomethig(num);
cout<<num<<endl;
    return 0;
}