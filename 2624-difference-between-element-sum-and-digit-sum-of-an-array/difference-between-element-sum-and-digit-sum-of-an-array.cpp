class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int sum=0;
        int num_sum=0;

        int n=nums.size();
        for(int i=0;i<n;i++){
             sum+=nums[i];
            if(nums[i]<=9){
                num_sum+=nums[i];
            }
            else{
                int a=nums[i];
                while(a>0){
                    int last=a%10;
                    num_sum+=last;
                    a/=10;
                }
            }
        }

        return abs(sum-num_sum);
    }
};