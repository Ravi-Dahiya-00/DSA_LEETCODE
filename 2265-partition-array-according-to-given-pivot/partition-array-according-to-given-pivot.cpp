class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> left;
        vector<int> right;
        vector<int> mid;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==pivot){
                mid.push_back(nums[i]);
            }
            else if(nums[i]<pivot){
                left.push_back(nums[i]);
            }
            else{
                right.push_back(nums[i]);
            }
        }

        int a=left.size();
        for(int i=0;i<a;i++){
            nums[i]=left[i];
        }
        int b=mid.size();
        for(int i=0;i<b;i++){
            nums[a+i]=mid[i];
        }

        for(int j=0;j<right.size();j++){
            nums[j+a+b]=right[j];
        }
        return nums;
    }
};