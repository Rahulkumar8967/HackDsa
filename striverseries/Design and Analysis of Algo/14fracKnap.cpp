#include <bits/stdc++.h>
using namespace std;
// fractional knapsack
// This problem is a greedy problem. We can take the whole item or none of it.
// We can take a fraction of the item. So we need to sort the items based on their value/weight ratio.
// Structure to represent an item with value, weight, and value/weight ratio
// tc O(nlogn) + O(n) = O(nlogn)
// sc O(n) for the items array
struct Item
{
  int value, weight;
  double ratio;
};

// Function to compare items based on value/weight ratio
bool cmp(Item a, Item b)
{
  return a.ratio > b.ratio;
}

double FractionalKnapSack(vector<int> &wt, vector<int> val, int capacity)
{
  int n = val.size();
  // sort the array
  vector<Item> items(n); // Create an array of items
  // Fill the items array with values and weights
  for (int i = 0; i < n; i++)  
  {
    items[i].value = val[i];
    items[i].weight = wt[i];
    items[i].ratio = (double)val[i] / wt[i];
  }
  sort(items.begin(), items.end(), cmp);
  int currentWeight = 0;
  double finalValue = 0;
  for (int i = 0; i < n;i++){
    if (currentWeight + items[i].weight <= capacity) {
      currentWeight += items[i].weight;
      finalValue += items[i].value;
    }
    else {
      int remainingWeight = capacity - currentWeight;
      finalValue += items[i].value * ((double)remainingWeight / items[i].weight);
      break; // Knapsack is full
    }
  }
  return finalValue;
  // return the maximum value that can be obtained
}

int main(){
  int n, W;
  cout << "Enter the number of items and the capacity of the knapsack: ";
  cin >> n >> W;
  vector<int> wt(n), val(n);
  cout << "Enter the weights of the items: ";
  for (int i = 0; i < n; i++)
  {
    cin >> wt[i];
  }
  cout << "Enter the values of the items: ";
  for (int i = 0; i < n; i++)
  {
    cin >> val[i];
  }
  double maxValue = FractionalKnapSack(wt, val, W);
  cout << "Maximum value you can get is: " << fixed << setprecision(2) << maxValue << endl;

  return 0;
}