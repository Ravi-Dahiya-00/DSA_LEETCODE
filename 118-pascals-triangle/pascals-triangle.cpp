class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        
        for(int i=1;i<=numRows;i++){
            ans.push_back(vector<int>(i,1));
            for(int j=0;j<i;j++){
                if(not(j==0 | j==i-1)){
                    ans[i-1][j]=ans[i-2][j-1]+ans[i-2][j];
                }
            }
        }
        return ans;
    }
};