class Solution {
public:
    int fun(vector<int>& nums,int low,int high,int target){
        if(low>high) return -1;
        int mid=low+(high-low)/2;
        if(nums[mid]==target) return mid;
        else if(target>nums[mid]){
            low=mid+1;
            return fun(nums,low,high,target);
        }
        else{
            high=mid-1;
            return fun(nums,low,high,target);
        }

    }
    int search(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        return fun(nums,low,high,target);
    }
};