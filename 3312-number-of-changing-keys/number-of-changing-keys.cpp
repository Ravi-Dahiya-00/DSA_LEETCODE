class Solution {
public:
    int countKeyChanges(string s) {
        int count=0;
        int n=s.length();
        for(int i=1;i<n;i++){
            if(abs(s[i]-s[i-1])!=32 && s[i]!=s[i-1]){
                count++;
            }
        }
        return count;
    }
};