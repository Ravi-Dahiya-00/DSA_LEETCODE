class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mpp;

        for(char c:s){
            mpp[c]++;
        } 


        int count=0;
        for(char c:s){
            if(mpp[c]==1) return count;
            count++;
        }
        return -1;
    }
};