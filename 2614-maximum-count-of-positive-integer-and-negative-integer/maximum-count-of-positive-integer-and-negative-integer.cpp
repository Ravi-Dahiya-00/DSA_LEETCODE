class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int neg=0;
        int pos=0;
        int low=0;
        int high=nums.size()-1;

        while(low<=high){
            if(nums[low]==0 && nums[high]==0){
                break;
            }
            if(nums[low]<0){
                neg++;
                low++;
            }
            if(nums[high]>0){
                pos++;
                high--;
            }
        }
        return (neg>pos)?neg:pos;
    }
};