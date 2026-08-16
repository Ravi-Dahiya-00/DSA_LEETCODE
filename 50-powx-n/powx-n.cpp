class Solution {
public:
    double Pow(double x,long long n){
        if(n==0) return 1;
        double half=Pow(x,n/2);
        double ans=(half*half);
        if(n%2==1) ans*=x;
        return ans;

    }
    double myPow(double x, int n) {
        long long exp=n;
        if(n<0){
            return Pow(1/x,-exp);
        }
        return Pow(x,exp);
    }
};