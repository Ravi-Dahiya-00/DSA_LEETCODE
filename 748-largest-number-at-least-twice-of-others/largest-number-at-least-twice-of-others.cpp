class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        vector<int> ans=nums;
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int num=nums[n-1];
        for(int i=0;i<n-1;i++){
            if(nums[i]*2>num){
                return -1;
            }
        }
        for(int i=0;i<n;i++){
            if(num==ans[i]){
                return i;
            }
        }
        return -1;
    }
};