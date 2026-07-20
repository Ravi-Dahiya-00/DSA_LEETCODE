class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        for(string s:sentences){
            if (s.length() == 0) continue;
            int space=0;
            for(char c:s){
                if(c==' ') space++;
            }
            // if(space>count) count=space+1;
            count = max(space + 1, count);
        }
        return count;
    }
};