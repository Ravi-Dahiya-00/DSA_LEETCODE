class Solution {
public:
    bool checkIfPangram(string sentence) {
       int mpp[26]={0};

       for(char c:sentence){
            mpp[c-'a']++;
       }
       for(char i=0;i<26;i++){
            if(mpp[i]==0) return false;
       }
       return true;
    }
};