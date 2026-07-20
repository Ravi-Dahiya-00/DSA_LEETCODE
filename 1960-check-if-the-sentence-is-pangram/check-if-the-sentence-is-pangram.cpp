class Solution {
public:
    bool checkIfPangram(string sentence) {
       unordered_map<char,int> mpp;

       for(char c:sentence){
            mpp[c]++;
       }
       for(char i='a';i<='z';i++){
            if(mpp[i]<1) return false;
       }
       return true;
    }
};