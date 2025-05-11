#include<bits/stdc++.h>
using namespace std;
// 0-1 knapsack  -> one element is one baar choose karo
int helper(int ind , vector<int> &wt,vector<int> &val, vector<vector<int>> &dp,int capacity){
  if(ind == 0){ // only one element is left 
    if(wt[0] <= capacity) return val[0];
    else return 0;
  }
  if(dp[ind][capacity] != -1) return dp[ind][capacity];
  int notTake = 0 + helper(ind - 1, wt, val, dp, capacity);
  int take = INT_MIN;
  if(wt[ind] <= capacity) take = val[ind] + helper(ind - 1, wt, val, dp, capacity - wt[ind]);
  return dp[ind][capacity] = max(take, notTake);
}

int KnapSack(vector<int> &wt, vector<int> &val, int capacity)
{
  int n = val.size();
  vector<vector<int>> dp(n, vector<int>(capacity + 1, -1));
  return helper(n - 1, wt, val, dp,capacity);
}

int main(){
  int n, W;
  cout<< "Enter the number of items and the capacity of the knapsack: ";
  cin >> n >> W;
  vector<int> wt(n), val(n);
  cout<< "Enter the weights of the items: ";
  for(int i = 0; i < n; i++){
    cin >> wt[i];
  }
  cout<< "Enter the values of the items: ";
  for(int i = 0; i < n; i++){
    cin >> val[i];
  }
 cout<< "maximum value you get is "<<KnapSack(wt,val,W) <<endl;


  return 0;
}