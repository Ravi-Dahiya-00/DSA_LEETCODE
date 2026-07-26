class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size()-1;
        int case1=nums[n]*nums[n-1]*nums[n-2];
        int case2=nums[0]*nums[n]*nums[1];
        return max(case1,case2);
    }
};