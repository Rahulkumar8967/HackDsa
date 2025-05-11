#include <bits/stdc++.h>
using namespace std;
// LCS -> longest common subsequence
// 1. longest common subsequence of two strings
// // memoization
// int helper(int ind1, int ind2, string &s1, string &s2, vector<vector<int>> &dp)
// {
//   if (ind1 < 0 || ind2 < 0)
//     return 0; // base case
//   if (dp[ind1][ind2] != -1)
//     return dp[ind1][ind2]; // check if already calculated
//   if (s1[ind1] == s2[ind2])
//     return dp[ind1][ind2] = 1 + helper(ind1 - 1, ind2 - 1, s1, s2, dp); // if last character is same
//   else {
//     int t1 = helper(ind1 - 1, ind2, s1, s2, dp);
//     int t2 = helper(ind1, ind2 - 1, s1, s2, dp);
//   return dp[ind1][ind2] = max(t1, t2); 
//   }
// }
// int longestCommonSubsequence(string s1, string s2)
// {
//   int n = s1.size(), m = s2.size();
//   vector<vector<int>> dp(n, vector<int>(m, -1));
//   return helper(n - 1, m - 1, s1, s2, dp);
// }

// tabulation
int longestCommonSubsequence(string s1, string s2)
{
  int n = s1.size(), m = s2.size();
  vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= m; j++)
    {
      if (s1[i - 1] == s2[j - 1])
        dp[i][j] = 1 + dp[i - 1][j - 1];
      else
        dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
    }
  }
  return dp[n][m];
}

int main()
{

  string s1, s2;

  cout << "Enter the first string: ";
  cin >> s1;
  cout << "Enter the second string: ";
  cin >> s2;
  cout << longestCommonSubsequence(s1, s2) << endl;

  return 0;
}