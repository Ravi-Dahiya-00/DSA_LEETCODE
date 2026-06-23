class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char,int> mpp;
        for(auto it:text){
            if(it=='b' || it=='a' || it=='l' || it=='o' || it=='n'){
            mpp[it]++;
            }
        }
        return min({mpp['b'],mpp['a'],mpp['l']/2,mpp['o']/2,mpp['n']});
    }
};