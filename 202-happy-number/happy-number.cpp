class Solution {
public:

    int getnext(int n){
        int ans=0;
        while(n>0){
            int digit=n%10;
            ans+=(digit*digit);
            n/=10;
        }
        return ans;
    }
    bool isHappy(int n) {
        unordered_set<int> seen;

        while(n!=1 && seen.find(n)==seen.end()){
            seen.insert(n);
            n=getnext(n);
        } 

        return n==1;
    }
};