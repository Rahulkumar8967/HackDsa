#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
cout<<"Enter the size of the Array "<<" ";
cin >> n;

cout<<"Enter the elements"<<endl;
int arr[n];
for(int i = 0;i<n;i++){
    cin >> arr[i];
}
//precompute

int hash[13] = {0};
for(int i= 0;i<n;i++){
    hash[arr[i]] += 1;
}
cout<<"precompute done and & how many query you want !"<<endl;;
int q;  // how many element they have search
cin >> q;
while(q--){
    int number;  // what search how many times has gone
    cin >> number;

// fetch
cout<< hash[number] << endl;
}
cout<<"fetching is done";
    return 0;
}