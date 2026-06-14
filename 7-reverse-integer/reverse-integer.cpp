class Solution {
public:
    int reverse(int x) {
        bool flag=false;
        if(x<0) {
            if(x==INT_MIN) return 0;
            x=-x;
            flag=true;
        }
        long long ans=0;
        while(x>0){
           ans=ans*10+(x%10);
           x/=10;
        }
        if(ans>INT_MAX) return 0;
        return flag?-ans:ans;
    }
};