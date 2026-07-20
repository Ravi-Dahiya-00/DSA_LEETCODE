class Solution {
public:
    string firstPalindrome(vector<string>& words) {
         string ans="";
        for(string s:words){
            int n=s.length();
            bool is=true;
            for(int i=0;i<n/2;i++){
                
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