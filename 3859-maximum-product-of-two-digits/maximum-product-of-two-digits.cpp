class Solution {
public:
    int maxProduct(int n) {
        int ans=INT_MIN;
        int last=n%10;
        n/=10;
        while(n>0){
            int a=n%10;
            int curr=a*last;
            ans=max(curr,ans);
            last=max(a,last);
             n/=10;
        }
        return ans;
    }
};