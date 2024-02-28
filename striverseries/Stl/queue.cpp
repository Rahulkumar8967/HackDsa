#include<bits/stdc++.h>
using namespace std;
//  FIFO -> first in first out
// all the operation perform as O(1) time complexity
void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1,2}
    q.emplace(4); // {1,2,4}

    q.back() += 5;


cout<< q.back(); // print 9
// Q is {1,2 ,9}
    cout<< q.front(); // print 1
    q.pop();
    cout<<q.front(); // print 2

    // size swap empty same as stack
}
int main(){


    return 0;
}