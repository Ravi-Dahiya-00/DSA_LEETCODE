class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int count=0;
        for(string s:sentences){
            int space=0;
            for(char c:s){
                if(c==' ') space++;
            }
            if(space>=count) count=space+1;
        }
        return count;
    }
};