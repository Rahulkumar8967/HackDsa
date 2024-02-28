#include<bits/stdc++.h>
using namespace std;

void f(int& cnt) {
    if(cnt==4){ // basecondition
        return ;
    }
    cout << cnt;
    cnt++;
    f(cnt);
}

int main() {
    int cnt = 0;
    f(cnt);
    return 0;
}



