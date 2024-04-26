 //- Write a Program for Linear Search of an element in an array.
#include<bits/stdc++.h>
using namespace std;
bool search(int arr[], int n, int key){
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int n;
cout<<"Enter the size of the array ";
    cin >> n;
int arr[n] ;
for(int i=0;i<n;i++) cin >> arr[i];
cout<<"Enter the key to search for "<<endl;
int key;
cin >> key;
bool found = search(arr, n, key);
if(found){
    cout<<"key is present "<<endl;
}else{
     cout<<"key is absent "<<endl;
}
    return 0;
}