#include<iostream>
using namespace std;
int main(){

  //  string  str;
    // for  taking input complete lines with space;
    //getline(cin, str);

int marks;
cin >> marks;
if(marks<25){
    cout<<"E";
}
else if (  marks<= 44){
    cout<<"D";
}
else if ( marks<=59 ){
    cout<<"c";
}
 else if ( marks<=80){
    cout<<"B";
}
else if ( marks<=100){
    cout<<"A";
}
    return 0;
}