class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=nums.size();
        int high=-1;
        int second=-1;
        int high_idx=-1;

        for(int i=0;i<n;i++){
            if(nums[i]>high){
                second=high;
                high=nums[i];
                high_idx=i;
            }
            else if(nums[i]>second){
                second=nums[i];
            }
        }
        return (second*2>high)?-1:high_idx;
    }
};