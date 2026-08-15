class Solution {
public:
    double myPow(double x, int n) {
        // if(n==1) return 1.0;
        if(x==0) return 0.0;
        
        return pow(x,n);
    }
};