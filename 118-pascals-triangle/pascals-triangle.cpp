class Solution {
public:
    vector<int> ncr(int n){
        long long ans=1;
        vector<int> ans_row;
        ans_row.push_back(1);
        for(int i=1;i<n;i++){
            ans=ans*(n-i);
            ans=ans/i;
            ans_row.push_back(ans);
        }
        return ans_row;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(ncr(i));
        }
        return ans;
    }
};

