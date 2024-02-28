#include<bits/stdc++.h>
using namespace std;


int main(){

set<int>st;
st.insert(1); // {1}
st.emplace(2); // {1,2}
st.insert(2); // {1,2}
st.insert(4); // {1,2,4}
st.insert(3); // {1,2,3,4}
/*
functionality of insert in vector can be used  also, that only increase efficiency

begib() , end(), rbegin(), rend(), size(),
empty() and swap() are same as those of above 

*/

//{1,2,3,4,5}

auto it = st.find(3);

//{1,2,3,4,5,6}
auto it = st.find(6);

st.erase(5);

int cnt = st.count(1);

auto it = st. find(3);
st.erase(it);
    return 0;
}