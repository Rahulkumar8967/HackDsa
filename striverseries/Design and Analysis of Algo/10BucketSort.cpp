#include<bits/stdc++.h>
using namespace std;

// tc O(n + nlogn) = O(nlogn)
// sc O(n) for the buckets

void BucketSort(float arr[], int n) {
    // Create n empty buckets
    vector<float> buckets[n];

    // Distribute the elements into buckets
    for (int i = 0; i < n; i++) {
    int  index = arr[i] * n; // Get the index for the bucket
        // Add the element to the appropriate bucket
      buckets[index].push_back(arr[i]);
    }

    // Sort each bucket and concatenate the results
    int index = 0; // Index to update the original array
    for (int i = 0; i < n; i++) {
        sort(buckets[i].begin(), buckets[i].end());
        for (float value : buckets[i]) {
            arr[index++] = value; // Update the original array
        }
    }
}
int main(){
float arr[] = {0.1, 0.2, 0.3, 0.4, 0.5};
int n = sizeof(arr)/sizeof(arr[0]);
BucketSort(arr, n);
for (int i = 0; i < n; i++) {
    cout << arr[i] << " "; // Print the sorted array
}
}
