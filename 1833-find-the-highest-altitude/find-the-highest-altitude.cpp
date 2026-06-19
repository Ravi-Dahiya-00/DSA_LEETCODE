class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int ans=0;
        int maxi=0;
        for(int i : gain){
            ans+=i;
            maxi=max(ans,maxi);
        }
        return maxi;
    }
};