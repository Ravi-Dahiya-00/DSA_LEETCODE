class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n=gain.size();
        vector<int> arr(n+1);
        arr[0]=0;
        int total=0;
        int maxi=arr[0];
        for(int i=0;i<n;i++){
            total+=gain[i];
            arr[i+1]=total;
            if(arr[i+1]>maxi){
                maxi=arr[i+1];
            }
        }
        return maxi;
    }
};