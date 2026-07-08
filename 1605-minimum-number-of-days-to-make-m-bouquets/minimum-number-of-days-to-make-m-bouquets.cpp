class Solution {
public:
    int mini_fun(vector<int> arr,int n){
        int mini=INT_MAX;
        for(int i=0;i<n;i++){
            if(arr[i]<mini){
                mini=arr[i];
            }
        }
        return mini;
    }
    int maxi_fun(vector<int> arr,int n){
        int maxi=INT_MIN;
        for(int i=0;i<n;i++){
            if(arr[i]>maxi){
                maxi=arr[i];
            }
        }
        return maxi;
    }
    int check(vector<int> arr,int n,int day,int m,int k){
        int no=0;
        int count=0;
        for(int i=0;i<n;i++){
            if(arr[i]<=day){
                count++;
            }
            else{
                no+=(count/k);
                count=0;
            }
        }
        no+=(count/k);
        return no;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int n=bloomDay.size();
        int mini=mini_fun(bloomDay,n);
        int maxi=maxi_fun(bloomDay,n);
        int ans=-1;
        while(mini<=maxi){
            int mid=mini+(maxi-mini)/2;
            int fun=check(bloomDay,n,mid,m,k);
            if(fun>=m){
                ans=mid;
                maxi=mid-1;
            }
            else{
                mini=mid+1;
            }

        }
        return ans;
    }
};