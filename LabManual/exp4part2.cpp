#include<bits/stdc++.h>
using namespace std;
// binary search using recursion
int binary_search(int arr[], int low, int high, int k){
if(high >= low) {
int mid = low +(high-low)/2;
if(arr[mid] == k) return mid;
if(arr[mid]>k)
return binary_search(arr,low,mid-1,k);
return binary_search(arr,mid+1, high, k);
}
return -1;
}
int main(){
  int n;
cout<<"Enter the size of the array ";
    cin >> n;
int arr[n] ;
for(int i=0;i<n;i++) cin >> arr[i];
cout<<"Enter the key to search for "<<endl;
int k;
cin >> k;
int element = binary_search(arr, 0,n-1, k);
cout<<"key is found at index "<<element<<endl;

    return 0;
}