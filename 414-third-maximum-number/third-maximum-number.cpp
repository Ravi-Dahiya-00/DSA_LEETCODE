class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n=nums.size();
        long long largest=nums[0];
        long long second=LLONG_MIN;
        long long third=LLONG_MIN;
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                third=second;
                second=largest;
                largest=nums[i];
            }
            else if(nums[i]<largest && nums[i]>second){
                third=second;
                second=nums[i];
            }
            else if(nums[i]<second && nums[i]>third){
                third=nums[i];
            }
        }
        return (third!=LLONG_MIN)?third:largest;
    }
};