#include <bits/stdc++.h>
using namespace std;
// merge Sort

void merge(int arr[], int low, int mid, int high)
{
  int left = low, right = mid + 1;
  int temp[high - low + 1];
  int index = 0;
  while (left <= mid && right <= high)
  {
    if (arr[left] < arr[right])
    {
      temp[index++] = arr[left++];
    }
    else
    {
      temp[index++] = arr[right++];
    }
  }
  while (left <= mid)
  {
    temp[index++] = arr[left++];
  }
  while (right <= high)
  {
    temp[index++] = arr[right++];
  }
  for (int i = low; i <= high; i++)
  {
    arr[i] = temp[i - low];
  }
}

void mergeSort(int arr[], int low, int high)
{
  // base case
  if (low >= high)
    return;
  int mid = (low + high) / 2;
  mergeSort(arr, low, mid);
  mergeSort(arr, mid + 1, high);
  merge(arr, low, mid, high);
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
  mergeSort(arr, low, high);
  cout << "Sorted Array Is: ";
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}