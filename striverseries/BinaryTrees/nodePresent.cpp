#include<bits/stdc++.h>
using namespace std;

int numberOfNode(int N){
    return pow(2, N - 1);
}
int main(){
    int N;
    cout << "Enter the Number of level of Binary tree";
    cin >> N;
    int ans = numberOfNode(N);
    cout << ans;

    return 0;
}