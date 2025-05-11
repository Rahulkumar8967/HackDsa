#include <bits/stdc++.h>
using namespace std;

int partition(int arr[],int low, int high){
  int pivot = arr[low];
  int i = low, j = high;
  while(i<j){
    // find the first element greater than pivot from left side
    while(arr[i]<=pivot && i<=high-1){
      i++;
    }
    // find the first element less than pivot from right side
    while(arr[j]>pivot && j>=low+1){
      j--;
    }
    // swap the elements
    if(i<j){
      swap(arr[i],arr[j]);
  }
  swap(arr[low], arr[j]);
  }
  return j;
}

void QuickSort(int arr[],int low, int high){
  if(low<high){
    int PIndex = partition(arr,low,high);
    QuickSort(arr,low,PIndex-1);
    QuickSort(arr,PIndex+1,high);
  }
}
int main()
{
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  int low = 0;
  int high = n - 1;
  QuickSort(arr, low, high);
  cout << "Sorted Array Is: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}