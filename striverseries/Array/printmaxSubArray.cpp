#include <bits/stdc++.h>
using namespace std;
class solution{
public:
    int printmaxsubArray(vector<int> &nums)
    {
        int n = nums.size();
        int sum = 0;
        int maxi = INT_MIN;
        int ansSt = -1, ansEnd = -1;
        int start = 0;
        for (int i = 0; i < n; i++)
        {
            if (sum == 0)
                start = i;  // start new index
            sum += nums[i];
            if (sum > maxi)
            {
                maxi = sum;
                ansSt = start, ansEnd = i;
            }
            if (sum < 0)
                sum = 0;
        }
        cout << "Maximum subarray is: ";
        for (int i = ansSt; i <= ansEnd; i++)
        {
            cout << nums[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    solution obj;
    int result = obj.printmaxsubArray(nums);
    return 0;
}
