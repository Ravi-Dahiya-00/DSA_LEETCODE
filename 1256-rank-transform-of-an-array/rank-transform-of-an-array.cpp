class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
        vector<int> ans=arr;
        sort(ans.begin(),ans.end());

       int rank=1;
        unordered_map<int,int> mpp;
        for(int i=0;i<n;i++){
            if(i==0 || ans[i]!=ans[i-1]){
                mpp[ans[i]]=rank++;
            }
        }

        vector<int> nums;
         for(int num:arr){
            nums.push_back(mpp[num]);
        }
        return nums;
    }
};