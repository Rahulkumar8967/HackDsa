#include<bits/stdc++.h>
using namespace std;
// t.c -> O(n* n!) , s.c -> O(1);
class solution{
    public:
void nextPermutation(vector<int> &nums){
next_permutation(nums.begin(), nums.end());
}
};
int main(){
    vector<int> nums = {3,2,1};
solution obj;
obj.nextPermutation(nums);
cout<<"Next permutation is ";
for(auto it: nums){
    cout<<it<<" ";
}
}