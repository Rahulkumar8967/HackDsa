#include <bits/stdc++.h>
using namespace std;
// tc O(nk) where n is the number of elements and k is the number of digits in the largest number
// Counting sort based on digit represented by exp
// sc O(n) for the output array and O(1) for the count array
void countingSortByDigit(int arr[], int n, int exp) {
    int output[n];
    int count[10] = {0}; // Because digits range from 0 to 9

    // Count occurrences of digits
    for (int i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    // Update count[i] so that count[i] contains actual position of digit i
    for (int i = 1; i < 10; i++)
        count[i] += count[i - 1];

    // Build the output array (stable sort - traverse from right)
    for (int i = n - 1; i >= 0; i--) {
        int digit = (arr[i] / exp) % 10;
        output[count[digit] - 1] = arr[i];
        count[digit]--;
    }

    // Copy the output array back to arr[]
    for (int i = 0; i < n; i++)
        arr[i] = output[i];
}

// Radix sort function
void radixSort(int arr[], int n) {
    int maxi = *max_element(arr, arr + n); // Find the maximum number

    // Apply counting sort to each digit (exp = 1, 10, 100, ...)
    for (int exp = 1; maxi / exp > 0; exp *= 10)
        countingSortByDigit(arr, n, exp);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];

    radixSort(arr, n);

    cout << "Array After Sorting: " << endl;
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    return 0;
}
