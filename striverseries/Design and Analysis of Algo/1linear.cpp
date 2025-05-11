#include <bits/stdc++.h>
using namespace std;

bool search(int arr[], int n, int key){
  for (int i = 0; i < n; i++){
    if (arr[i] == key){
      return 1;
    }
  }
  return 0;
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

  bool found = search(arr, n, key);
  if (found){
    cout << "Key is present";
  }else{
    cout << "Key is not present";
  }
  return 0;
}
