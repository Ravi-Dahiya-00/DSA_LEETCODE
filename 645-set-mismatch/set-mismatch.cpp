class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int,int> st;

        for(int i=1;i<=nums.size();i++){
            st[i]++;
        }

        for(int num:nums){
            st[num]++;
        }
        
        int a=-1,b=-1;
        for(auto& it:st){
            if(it.second==3) a=it.first;
            if(it.second==1) b=it.first;
        }
        return {a,b};
    }
};