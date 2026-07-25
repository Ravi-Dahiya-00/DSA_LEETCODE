class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> a;
        for(char c:s){
            if(c=='#'){
                if(a.size()>0){
                    a.pop();
                }
            }
            else a.push(c);
        }

        stack<char> b;
        for(char c:t){
            if(c=='#'){
                if(b.size()>0){
                    b.pop();
                }
            }
            else b.push(c);
        }
        return (a==b)?true:false;
    }
};