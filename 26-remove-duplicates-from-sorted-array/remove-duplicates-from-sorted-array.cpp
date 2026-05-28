class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       set<int> s;
       for(int i=0;i<nums.size();i++){
         s.insert(nums[i]);
       }
       int k=0;
       for(int a:s){
        nums[k++]=a;
       }
       return k;
    }
};