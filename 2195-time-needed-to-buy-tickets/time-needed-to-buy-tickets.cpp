class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        int ans=0;

        for(int i=0;i<tickets.size();i++){
            if(i>k && tickets[k]<=tickets[i]){
                ans+=tickets[k]-1;
            }
            else{
                ans+=min(tickets[k],tickets[i]);
            }
        }
        return ans;
    }
};