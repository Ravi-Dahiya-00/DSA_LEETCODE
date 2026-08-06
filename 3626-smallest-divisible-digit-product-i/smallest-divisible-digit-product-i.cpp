class Solution {
public:
    int smallestNumber(int n, int t) {
        
        while(true){
            int product=1;
            int el=n;
            while(el>0){
                int last=el%10;
                product*=last;
                el/=10;
            }
            if(product%t==0){
                return n;
            }
            n++;
        }
        return -1;
    }
};