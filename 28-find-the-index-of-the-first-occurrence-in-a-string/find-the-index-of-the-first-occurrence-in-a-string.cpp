class Solution {
public:
    int strStr(string haystack, string needle) {

        
        for(int i=0;i<haystack.length();i++){
           int a=0;
            for(int j=0;j<needle.length();j++){
                if(haystack[i+j]==needle[j]){
                    a++;
                     continue;
                }
                else break;
            }
            
            if(a==needle.length()) return i;
        }
        return -1;
    }
};