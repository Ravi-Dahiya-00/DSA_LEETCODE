class Solution {
public:
    int maxi(vector<int> nums,int n){
        int el=INT_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>el){
                el=nums[i];
            }
        }
        return el;
    }
    int sum(vector<int> nums,int n,int d){
        int sum=0;
        for(int i=0;i<n;i++){
            sum=sum+ceil((double)(nums[i])/(double)(d));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int n=nums.size();
        int low=1,high=maxi(nums,n);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(sum(nums,n,mid)<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};