class Solution {
public:
    void reverseString(vector<char>& s) {
        int low=0,high=s.size()-1;
        if(s.size()<=1) return;
        while(low<high){
            int temp=s[low];
            s[low]=s[high];
            s[high]=temp;
            low++;
            high--;
        }
    }
};