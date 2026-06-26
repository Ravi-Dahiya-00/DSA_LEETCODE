class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int maxi=n/2;
        int ans=-1;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto& num:mpp){
            if(num.second>maxi){
                ans=num.first;
            }
        }
        return ans;
    }
};