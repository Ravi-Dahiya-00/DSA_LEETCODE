class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int n=arr.size();
        int found=-1;

        if(n<3) return false;
        for(int i=0;i<n-1;i++){
            if(arr[i]==arr[i+1]){
                return false;
            }
            if(arr[i]>arr[i+1]){
                found=i;
                break;
            }
        }
        if(found==-1 || found==0){
            return false;
        }
        for(int i=found;i<n-1;i++){
            if(arr[i]<=arr[i+1]){
                return false;
            }
        }
        return true;
    }
};