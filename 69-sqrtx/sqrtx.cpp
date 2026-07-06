class Solution {
public:
    int mySqrt(int x) {
        int low=0,high=x;
        while(low<=high){
            long long mid=(low+high)/2;
            long long a=mid*mid;
            if(a==x){
                return mid;
            }
            else if(a>x){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return high;
    }
};