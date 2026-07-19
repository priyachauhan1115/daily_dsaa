#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       int n=nums.size();
       for(int i=0;i<n-1;i++)
       { for(int j=i+1;j<n;j++)
         if(nums[i]+nums[j]==target)
         { return {i,j};
         }
         }  
        return {};
    }
};
int main() {
    Solution s;
    int sz,target;
    cout<<"Enter the size of the array: ";
    cin>>sz;
    vector<int> nums(sz);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<sz;i++)
    {
        cin>>nums[i];
    }
    cout<<"Enter the target: ";
    cin>>target;
    vector<int> result = s.twoSum(nums, target);
    cout << "Indices: " << result[0] << ", " << result[1] << endl;
    return 0;
}
