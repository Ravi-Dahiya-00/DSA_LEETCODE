class Solution {
public:

    void merge(vector<int>& nums,int low,int mid,int high){
        vector<int> temp;
        int left=low;
        int right=mid+1;

        while(left<=mid && right<=high){
            if(nums[left]<=nums[right]){
                temp.push_back(nums[left]);
                left++;
            }
            else{
                temp.push_back(nums[right]);
                right++;
            }
        }

        while(left<=mid){
            temp.push_back(nums[left]);
            left++;
        }
        while(right<=high){
            temp.push_back(nums[right]);
            right++;
        }

        for(int i=low;i<=high;i++){
            nums[i]=temp[i-low];
        }
    }

    void ms(vector<int>& nums,int low,int high){
        if(low>=high) return;
        int mid=low+(high-low)/2;
        ms(nums,low,mid);
        ms(nums,mid+1,high);
        merge(nums,low,mid,high);
    }
    void mergesort(vector<int>& nums,int n){
        ms(nums,0,n-1);
    }
    vector<int> numberGame(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,n);
        for(int i=0;i<n;i+=2){
            int temp=nums[i];
            nums[i]=nums[i+1];
            nums[i+1]=temp;
        }
        return nums;
    }
};