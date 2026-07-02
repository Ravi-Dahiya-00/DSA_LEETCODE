class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first=-1;
        int second=-1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==target){ 
                 if(first==-1){
                    first=i;
                 }
                 second=i;
            }
        }
        return {first,second};
    }
};