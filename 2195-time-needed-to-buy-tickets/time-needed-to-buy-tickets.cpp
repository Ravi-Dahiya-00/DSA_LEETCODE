class Solution {
public:
    int timeRequiredToBuy(vector<int>& tickets, int k) {
        queue<int> q;
        int n = tickets.size();

        for (int i = 0; i < n; i++) {
            q.push(i);
        }
        
        int t = 0;
        
        while (tickets[k] > 0) {
            int curr_person = q.front();
            q.pop();
            
            tickets[curr_person]--;
            t++;
            
            if (tickets[curr_person] > 0) {
                q.push(curr_person);
            }
        }
        
        return t;
    }
};