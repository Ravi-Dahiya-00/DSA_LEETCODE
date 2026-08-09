class Solution {
public:
    int myAtoi(string s) {
        long long ans=0;
        bool neg=false;
        int n=s.length();
        int i=0;
       while(i<n && s[i]==' '){
        i++;
       }

       if(i<n && s[i]=='-' || s[i]=='+'){
        if(s[i]=='-') neg=true;
        i++;
       }


       while(i<=n && isdigit(s[i])){
        int digit=s[i]-'0';
        cout << digit << " ";
        ans=ans*10+digit;

        if(!neg && ans>INT_MAX){
            return INT_MAX;
        }
        if(neg && -ans<INT_MIN){
            return INT_MIN;
        }
        i++;
       }

        if(neg){
            ans=-ans;
        }
       return ans;
    }
};