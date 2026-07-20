class Solution {
public:
    string firstPalindrome(vector<string>& words) {
         string ans="";
        for(string s:words){
            int n=s.length();
            bool is=false;
            for(int i=0;i<n;i++){
                if(i==n-1) is=true;
                if(s[i]!=s[n-i-1]){
                    is=false;
                    break;
                }  
            }
            if(is==true){
                ans=s;
                break;
            }
        }
        return ans;
    }
};