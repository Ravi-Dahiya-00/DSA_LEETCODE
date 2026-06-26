class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        unordered_map<int,int> ans;

        for(int i=0;i<n;i++){
            int remain=target-nums[i];

            if(ans.find(remain)!=ans.end()){
                return {ans[remain],i};
            }
            ans[nums[i]]=i;
        }
        
        return {};
    }
};