#include <bits/stdc++.h>
using namespace std;

int heapify(int arr[], int n, int i)
{
  int largest = i; // 1
  int left = 2 * i ;  // 2
  int right = 2 * i + 1; // 3
  if (left < n && arr[left] > arr[largest])
    largest = left;
  if (right < n && arr[right] > arr[largest])
    largest = right;
  if (largest != i)
  {
    swap(arr[i], arr[largest]);
    heapify(arr, n, largest);
  }
}

void heapSort(int arr[], int n)
{
  for (int i = n / 2 - 1; i >= 0; i--)  // build heap through leaf nodes
    heapify(arr, n, i);
  for (int i = n - 1; i > 0; i--) //  extract elements from heap
  {
    swap(arr[0], arr[i]); // swap last value to root and remove root
    heapify(arr, i, 0);   // call max heapify on the reduced heap
  }
}

int printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{

  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];

  cout << "Array After Sorting: " << endl;
  heapSort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}