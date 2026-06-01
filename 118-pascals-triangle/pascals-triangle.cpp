class Solution {
public:
    int ncr(int n,int r){
        long long result=1;
        for(int i=0;i<r;i++){
            result=result*(n-i);
            result=result/(i+1);
        }
        return result;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                temp.push_back(ncr(i,j));
            }
            ans.push_back(temp);
        }
        return ans;
    }
};