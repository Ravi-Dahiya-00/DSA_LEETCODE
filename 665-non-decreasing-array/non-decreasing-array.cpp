class Solution {
public:

    bool is_increasing(vector<int> arr){
        int n=arr.size();
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                return false;
            }
        }
        return true;
    }
    bool checkPossibility(vector<int>& nums) {
        int n=nums.size();
        
        for(int i=0;i<n-1;i++){
            if(nums[i]>nums[i+1]){
                vector<int> temp1=nums;
                temp1.erase(temp1.begin()+i);
                if(is_increasing(temp1)){
                    return true;
                }

                vector<int> temp2=nums;
                temp2.erase(temp2.begin()+i+1);
                if(is_increasing(temp2)){
                    return true;
                }
                return false;
            }
        }
        return true;
    }
};