#include<bits/stdc++.h>
using namespace std;
// without recursion 
int binary_search(int arr[], int n, int key){
int low = 0;
int high = n-1;
while (low<=high){
    int mid = low+ (high -low)/2;
    if(arr[mid] == key){
        return mid;
    }else if(key > arr[mid]){
        low = mid+1;
    }else{
        high = mid-1;
    }

}
return -1;
}

int main(){
int n;
cout <<"Enter the size of an array ";
cin >> n;
int arr[n];

for(int i=0;i<n;i++) cin >> arr[i];
int key;
cout<<"Enter the key which is search ";
cin >> key;
//int bs = binary_search(arr,n,key);
cout<<"key is found at index "<<binary_search(arr,n,key)<<endl;
return 0;
}