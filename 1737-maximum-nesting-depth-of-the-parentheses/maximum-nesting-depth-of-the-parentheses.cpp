class Solution {
public:
    int maxDepth(string s) {
        stack<int> st;

        int maxi=0;
        for(char c:s){
            if(c=='('){
                st.push(c);
            }
            else if(c==')'){
                int val=st.size();
                maxi=max(val,maxi);
                st.pop();
            }
        }
        return maxi;
    }
};