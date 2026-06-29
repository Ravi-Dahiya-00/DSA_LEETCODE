class Solution {
public:
    vector<int> rearrangeArray(vector<int>& arr) {
        int n=arr.size();
        int neg=1;
        int pos=0;
        vector<int> ans(n);

        for(int i=0;i<n;i++){
            if(arr[i]>=0){
                ans[pos]=arr[i];
                pos+=2;
            }
            else{
                ans[neg]=arr[i];
                neg+=2;
            }
        }
        return ans;
    }
};