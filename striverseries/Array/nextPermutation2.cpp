#include<bits/stdc++.h>
using namespace std;
// t.c -> O(3n) , s.c -> O(1)
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int index = -1;
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                 index = i;
                break;
            }
        }
            if(index == -1){
                reverse(nums.begin(),nums.end());
                return ;
        }
        for(int i=n-1;i>=index;i--){
            if(nums[i]> nums[index]){
                swap(nums[i], nums[index]);
                break;
            }
        }
        reverse(nums.begin()+index+1, nums.end());
    }
};
int main(){
int n;
cin >> n;
vector<int>nums(n);
  for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
Solution obj;
obj.nextPermutation(nums);
cout<<"Next permutation is ";
for(auto it: nums){
    cout<<it<<" ";
}

    return 0;
}