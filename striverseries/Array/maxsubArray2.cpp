#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
int maxsubArray(vector<int> &nums){
    int sum = 0;
    int maxi = INT_MIN;
    for(auto it: nums){
        sum += it;
        maxi = max(sum,maxi);
        if(sum <0)   sum = 0;
    }
    return maxi;
}
};
int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
     for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
solution obj;
int result = obj.maxsubArray(nums);
cout<<"maximum subArray is "<<result;

    return 0;
}