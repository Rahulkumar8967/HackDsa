// write insertion sort algorithm

#include <bits/stdc++.h>
using namespace std;

void InsertionSort(int arr[], int n)
{
  // 
  for (int i = 1; i <n; i++)
  {
    int j = i;
    while (j > 0 && arr[j - 1] > arr[j])
    {
      swap(arr[j - 1], arr[j]);
      j--;
    }
  }
}

int main()
{
  int n;
  cout << "Enter the size of the array: ";
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  InsertionSort(arr, n);
  cout << "Sorted Array Is: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;

  return 0;
}