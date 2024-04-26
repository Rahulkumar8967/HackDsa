 // EXPERIMENT – 1
 //Objective - Write a code to implement insertion and deletion of data element in an array.
#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter the Size of the Array"<<endl;
cin >> n;
int a[100], b; 
for(int i=0;i<n;i++){  // a is given to input the array
    cin >> a[i] ;
}

while( b != 3){  // b is given to choice
  cout << "Enter your choice" << endl << "Choose 1 for insertion" << endl
             << "Choose 2 for deletion " << endl << "Choose 3 to exit " << endl;
cin >> b;  // choice of option
switch(b){
case 1:
int c;
cout<<"Enter the number of elements to be inserted ";
cin >> c;
a[n] = c;
n++;

cout<<"Array after inserting "<<endl;
for(int i=0;i<n;i++){
    cout<< a[i]<<" ";
}
cout<<endl;
break;

case 2:
cout<<"Enter the number to be deleted ";
cin >> c;
for(int i=0;i<n;i++){
    if( c == a[i]){
        for(int j = i;j<n;j++){
        a[j] = a[j+1];

    }
    n--;
     cout << "Array after deletion" << endl;
                        for (int i = 0; i < n; i++) {
                            cout << a[i] << " ";
                        }
                        cout << endl;
                        break;
}else if( i == n){
    cout<<"Element not found"<<endl;
}
}
n--;
break;

case 3:
break;

default:
cout<<"Invalid Choice ";
}
}
    return 0;
}


