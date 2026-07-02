class Solution {
public:
    int lowerbound(vector<int>&  nums,int target,int n){
        int low=0,high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>=target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    int upperbound(vector<int>& nums,int target,int n){
        int low=0,high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]>target){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        if(n==0) return {-1,-1};
        int lb=lowerbound(nums,target,n);
        if(lb==n || nums[lb]!=target) return {-1,-1};
        int hb=upperbound(nums,target,n);
        return {lb,hb-1};
    }
};