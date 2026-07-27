class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> mpp;

        for(char c:s){
            mpp[c]++;
        }

        unordered_map<char,int> mpp2;
        for(char c:t){
            mpp2[c]++;
        }

        return mpp==mpp2;
    }
};