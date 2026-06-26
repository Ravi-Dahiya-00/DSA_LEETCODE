class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        map<int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[nums[i]]++;
        }

        int j=0;
        for(auto& num:mpp){
            for(int i=0;i<num.second;i++){
                nums[j]=num.first;
                j++;
            }
        }
    }
};