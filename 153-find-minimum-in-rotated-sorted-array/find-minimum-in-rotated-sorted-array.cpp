class Solution {
public:
    int findMin(vector<int>& arr) {
        int n=arr.size();
        int low=0,high=n-1;
        int mini=INT_MAX;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<mini){
                mini=arr[mid];
            }
            if(arr[high]<arr[mid]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return mini;
    }
};