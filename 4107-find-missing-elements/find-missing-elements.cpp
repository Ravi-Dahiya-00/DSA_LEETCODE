class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        vector<int> ans;
        int smallest=nums[0];
        int largest=nums[nums.size()-1];
        int j=0;
        for(int i=smallest;i<=largest;i++){
            if(nums[j]==i){
                cout << nums[j];
                j++;
                continue;
            }
            else{
                ans.push_back(i);
                // j--;
            }
        }
        return ans;
    }
};