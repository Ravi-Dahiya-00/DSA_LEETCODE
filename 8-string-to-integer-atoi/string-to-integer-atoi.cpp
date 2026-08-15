class Solution {
public:
    int helper(string s,int i,long long num,int neg){
        if(i>=s.size() || !isdigit(s[i])){
            return (int)(num*neg);
        }

        num=num*10+(s[i]-'0');

        if(num*neg<=INT_MIN) return INT_MIN;
        if(num*neg>=INT_MAX) return INT_MAX;

        return helper(s,i+1,num,neg);
    }
    int myAtoi(string s) {
      int i=0;
      while(i<s.size() && s[i]==' ') i++;

      int neg=1;
      if(i<s.size() && (s[i]=='+' || s[i]=='-')){
        if(s[i]=='-') neg=-1;
        i++;
      }  

      return helper(s,i,0,neg);
    }
};