class Solution {
public:
    string removeOuterParentheses(string s) {
        
        string ans;
        int count=0;
        for(char c:s){
            if(c=='('){
                if(count>=1){
                    ans+=c;
                }
                count++;
            }
            else{
                count--;
                if(count>=1){
                    ans+=c;
                }
            }
        }

        return ans;
    }
};