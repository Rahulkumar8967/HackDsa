#include<bits/stdc++.h>
using namespace std;

int search(int arr[],int n,int key){
  int low = 0;
  int high = n - 1;
  while(low<=high){
    int mid = low + (high-low)/2;
    if(arr[mid] == key){
      return mid;
    }else if(key > arr[mid]){
      low = mid + 1;
    }else{
      high = mid - 1;
    }
  }
  return -1;
}

int main(){
  int n;
  cout << "Enter the size of the Array" << "";
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  cout << "Enter the key to search for" << endl;
  int key;
  cin >> key;

  int ans  = search(arr, n, key);
  if (ans != -1){
    cout << "Key is present at index "<<ans<<endl;
  }
  else{
    cout << "Key is not present"<<endl;
  }
  return 0;
}