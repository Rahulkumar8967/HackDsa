#include<bits/stdc++.h>
using namespace std;

// list
void explainDeque(){
list<int> dq;
dq.push_back(1);
dq.emplace_back(2);  //{1,2}
dq.push_front(4); // {4, 1, 2}
dq.emplace_front(3); // {3, 4, 1,2 }
// rest functions same as vector
// begin , end, rbegin, rend, clear, insert, size, swap



}
int main(){
    
 explainDeque();


    return 0;
}