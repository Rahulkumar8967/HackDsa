#include<bits/stdc++.h>
using namespace std;
/* 
void explainMultiset(){
    // everything is same as set
    // only stores duplicate element also

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1,1}
    ms.insert(1); // {1,1,1}

ms.erase(1); // all 1's erased
int cnt = ms.count(1);

// only a single one erased
ms.erase(ms.find(1), ms.find((1) +2));

// rest all function same as set
}
*/

// unorderset

void explainunordered(){
    unordered_set <int> st;
    // lower_BOUND AND UPPER BOUND function
    // does not works, rest all function are same
    // as above , it does not store in any  particular order it has a better complexitiy 
    // Than set in most case ,except some when collosion happens

}
int main(){



    return 0;
}