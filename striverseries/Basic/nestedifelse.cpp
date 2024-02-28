#include<iostream>
using namespace std;

int main(){
int age;
cin >> age;
if(age<18){
    cout<<"not eligible for job";
}else if(age<=49){
    cout<<"Eligible for job";
}else if(age <=59){
    cout<<"planning for retirement";
}else{
    cout<<"Retire soon !!";
}


    return 0;
}