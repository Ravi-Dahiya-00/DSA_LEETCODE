class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        int n=s.length();
        for(int i=1;i<n;i++){
            if(tolower(s[i])!=tolower(s[i-1])){
                count++;
            }
        }
        return count;
    }
};