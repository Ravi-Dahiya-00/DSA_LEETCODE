class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string word;
        stringstream ss(s);
        while(ss >> word){
            st.push(word);
        }

        string ans;
        while(!st.empty()){
            ans+=st.top();
            ans+=" ";
            st.pop();
        }
        ans.pop_back();
        return ans;
    }
};