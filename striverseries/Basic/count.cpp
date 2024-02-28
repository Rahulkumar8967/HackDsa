#include<bits/stdc++.h>
using namespace std;
  int countDigit(int n){
int cnt = 0;
while(n!=0){
    n = n/10;
    cnt++;
}
return cnt;
  }
int main(){
int n;
cin >> n;
int ans = countDigit(n);
cout<<ans;

    return 0;
}