class Solution {
public:
    bool helper(int i,string &s){
        if(i>=s.size()/2) return true;
        if(s[i]!=s[s.size()-i-1]) return false;
        return helper(i+1,s);
    }
    bool isPalindrome(string s) {
        string filter="";
        for(char c:s){
            if(isalnum(c)){
                filter+=tolower(c);
            }
        }
        return helper(0,filter);
    }
};