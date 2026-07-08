class Solution {
public:
    int maxi(vector<int> piles){
        int max_el=INT_MIN;
        int n=piles.size();
        for(int i=0;i<n;i++){
            if(piles[i]>max_el){
                max_el=piles[i];
            }
        }
        return max_el;
    }
    long long calctotal(vector<int>& piles,int hourly){
        long long totalhr=0;
        int n=piles.size();
        for(int i=0;i<n;i++){
            totalhr+= ceil((double)piles[i]/(double)hourly);
        }
        return totalhr;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=maxi(piles);
        int ans=-1;
        while(low<=high){
            int mid=low+(high-low)/2;
            long long totalhr=calctotal(piles,mid);
            if(totalhr<=h){
                high=mid-1;
                ans=mid;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};