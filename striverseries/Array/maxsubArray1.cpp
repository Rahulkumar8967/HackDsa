#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
int subArray(vector<int> &nums){
    int n = nums.size();
int maxi = INT_MIN;
for(int i=0;i<n;i++){
    int sum = 0;
     for(int j = i;j<n;j++){
        sum += nums[j];
         maxi = max(sum,maxi);
     }  
}
    return maxi;
   }
};
int main(){
vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
solution obj;
int result = obj.subArray(nums);
cout<<result;
    return 0;
}