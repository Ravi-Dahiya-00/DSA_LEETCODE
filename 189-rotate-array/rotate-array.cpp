class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        
        vector<int> arr;
        int n=nums.size();

        if(n<=1) return;

        k=k%n;    // so that always k<n

        for(int i=n-k;i<n;i++){
            arr.push_back(nums[i]);
        }
        for(int i=0;i<n-k;i++){
            arr.push_back(nums[i]);
        }

        for(int i=0;i<n;i++){
            nums[i]=arr[i];
        }
    }
};