#include<bits/stdc++.h>
using namespace std;

void explainMultimap(){
// everything same as map, only it can store multiple keys
// only mpp[key] cannot be used here

}

void explainUnorderedMap(){
    // same as set and unoreded_set difference.

}

bool comp(pair<int, int> p1, pair<int, int>p2){
    if(p1.second <p2.second){
        return true;

    }else if(p1.second == p2.second){
        if(p1.first>p2.second) return true;
    }
    return false;
}


int main(){


    return 0;
}