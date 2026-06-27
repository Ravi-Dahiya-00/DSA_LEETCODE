class Solution {
public:
    int majorityElement(vector<int>& nums) {   
        int n=nums.size();
        int count=0;
        int element=-1;
        for(int i=0;i<n;i++){
            if(count==0){
                element=nums[i];
            }
            if(element==nums[i]){
                count++;
            }
            else{
                count--;
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==element){
                cnt++;
            }
        }
        return (cnt>n/2)?element:-1;
    }
};      