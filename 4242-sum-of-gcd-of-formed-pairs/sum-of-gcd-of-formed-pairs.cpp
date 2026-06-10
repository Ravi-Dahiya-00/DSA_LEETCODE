class Solution {
public:
    int gcd(int a,int b){
        while(b){
            int temp=b;
            b=a%b;
            a=temp;
        }
        return a;
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<int> prefix_gcd(n);

        int maxi=nums[0];
        for(int i=0;i<n;i++){
            maxi=max(maxi,nums[i]);
            prefix_gcd[i]=gcd(nums[i],maxi);
        }

        sort(prefix_gcd.begin(),prefix_gcd.end());
        long long sum=0;
        for(int i=0;i<n/2;i++){
            sum+=gcd(prefix_gcd[i],prefix_gcd[n-i-1]);
        }
        return sum;
    }
};