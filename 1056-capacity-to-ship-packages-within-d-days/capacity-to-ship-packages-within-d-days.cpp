class Solution {
public:

    int total_days(vector<int> weights,int capacity,int n){
        int load=0,day=1;
        for(int i=0;i<n;i++){
            if(load+weights[i]>capacity){
                day=day+1;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return day;
    }
    vector<int> cal_sum(vector<int> weights,int n){
        int sum=0;
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            sum+=weights[i];
            if(weights[i]>maxi){
                maxi=weights[i];
            }
        }
        return {sum,maxi};
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int ans=-1;
        vector<int> values=cal_sum(weights,n);
        int sum=values[0];
        int maxi=values[1];

        int low=maxi,high=sum;
        while(low<=high){
            int mid=low+(high-low)/2;
            int day=total_days(weights,mid,n);
            if(day<=days){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};