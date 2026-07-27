class Solution {
public:
    bool isPerfectSquare(int num) {

        if(num<2) return true;
        long long low=1;
        long long high=num;

        while(low<=high){
            long long mid=low+(high-low)/2;
            long long ans=mid*mid;
            if(ans==num) return true;
            else if(ans>num) high=mid-1;
            else low=mid+1;
        }
        return false;
    }
};