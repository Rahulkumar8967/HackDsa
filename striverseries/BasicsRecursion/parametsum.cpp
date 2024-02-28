#include<bits/stdc++.h>
using namespace std;
// parameterised way
void funsum(int i, int sum){
    if(i<1){
        cout<<sum;
        return;
    }
    funsum(i-1, sum + i);
}

int main(){
int n;
cin >> n;

funsum(n,0);


    return 0;
}