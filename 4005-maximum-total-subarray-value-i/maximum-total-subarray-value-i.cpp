class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int min=nums[0];
        int max=nums[0];

        for(int num : nums){
            if(num<min) min=num;
            if(num>max) max=num;
        }

        return (long long)k * (max-min);
    }
};