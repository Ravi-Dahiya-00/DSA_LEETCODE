class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
      int a=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[a]!=nums[i]){
                nums[a+1]=nums[i];
                a++;
            }
        }
        return a+1;
    }
};