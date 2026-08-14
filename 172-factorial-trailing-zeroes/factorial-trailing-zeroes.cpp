class Solution {
public:

    int trailingZeroes(int n) {
        if(n==0 || n==1) return 0;
        int count=0;
       
       for(int i=2;i<=n;i++){
            int num=i;
            while(num%5==0){
                count++;
                num/=5;
            }
       }
        return count;
    }
};