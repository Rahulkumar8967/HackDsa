#include <bits/stdc++.h>
using namespace std;
// counting sort
void countingSort(int arr[], int n){
  int output[n];
  int maxi = arr[0];
  for (int i = 1; i < n; i++){
    if (arr[i] > maxi)
      maxi = arr[i];
  }
  int count[maxi + 1] = {0};
  for (int i = 0; i < n; i++){
    count[arr[i]]++; // counting the frequency of each element
  }
  for (int i = 1; i <= maxi; i++){
    count[i] += count[i - 1];  // counting the exact location of each element
  }

  for (int i = n - 1; i >= 0; i--){
    output[count[arr[i]] - 1] = arr[i]; // placing the elements in the output array
    count[arr[i]]--;
  }
  for (int i = 0; i < n; i++){  // copying the output array to the original array
    arr[i] = output[i];
  }

}

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)   cin >> arr[i];
  cout << "Array After Sorting: " << endl;
  countingSort(arr, n);
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
  return 0;
}