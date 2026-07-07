class Solution {
public:
    long long sumAndMultiply(int n) {
        long long x=0;
        long long sum=0;
        long long mul=1;
        while(n>0){
            int last_digit=n%10;
            if(last_digit!=0){  
                 x+=last_digit*mul;
                  mul*=10;
                 sum+=last_digit;
            }
            n/=10;
        }
        return x*sum;
    }
};