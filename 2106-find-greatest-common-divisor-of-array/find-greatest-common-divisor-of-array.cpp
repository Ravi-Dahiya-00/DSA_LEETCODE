class Solution {
public:
    int findGCD(vector<int>& nums) {
        int smallest=INT_MAX;
        int largest=-1;

        for(int i=0;i<nums.size();i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
            if(nums[i]<smallest){
                smallest=nums[i];
            }
        }

        return gcd(largest,smallest);
    }
};