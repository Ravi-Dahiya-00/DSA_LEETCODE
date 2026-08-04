class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int smallest=INT_MAX;
        int largest=INT_MIN;

        unordered_map<int,int> mpp;

        for(int i=0;i<nums.size();i++){
            if(nums[i]<smallest) smallest=nums[i];
            if(nums[i]>largest) largest=nums[i];
            mpp[nums[i]]++;
        }

        

        for(int i=smallest;i<=largest;i++){
            mpp[i]++;
        }

        

        vector<int> ans;
        for(auto& i:mpp){
            if(i.second==1) ans.push_back(i.first);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};