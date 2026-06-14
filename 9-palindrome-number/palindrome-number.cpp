class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        if(x==0) return true;
        long long org=x;
        long long rev;
        while(x>0){
            rev+=x%10;
            rev*=10;
            x/=10;
        }
        rev/=10;
        return rev==org;
    }
};