class Solution {
public:
    bool isValid(string s) {
        stack<char> st;

        for(char c:s){
            if(c=='(' || c=='[' || c=='{'){
                st.push(c);
            }
            else{
                if(st.empty()) return false;
                
                char a=st.top();
                st.pop();
                if((a=='(' && c==')') || (a=='[' && c==']')  || (a=='{' && c=='}')){
                    continue;
                }
                else{
                    return false;
                }
            }

        }

        return st.empty();
    }
};