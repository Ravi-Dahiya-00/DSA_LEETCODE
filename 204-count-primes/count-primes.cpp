class Solution {
public:
    int countPrimes(int n) {
        
        vector<bool> isprime(n+1,true);
        int count=0;
        for(int i=2;i<n;i++){
            if(isprime[i]==true){
                for(int j=2;i*j<n;j++){
                    isprime[i*j]=false;
                }
            }
        }
        for(int i=2;i<n;i++){
            if(isprime[i]==true) count++;
        }
        return count;
    }
};