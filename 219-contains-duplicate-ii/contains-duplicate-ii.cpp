class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_set<int> arr;
        for(int i=0;i<nums.size();i++){
            if(arr.find(nums[i])!=arr.end()){
                return true;
            }
            arr.insert(nums[i]);
            if(arr.size()>k){
                arr.erase(nums[i-k]);
            }
        }
        return false;
    }
};