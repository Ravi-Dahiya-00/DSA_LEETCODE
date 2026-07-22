/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        map<ListNode*,int> st;

        ListNode* temp=head;
        while(temp!=NULL){
            if(st.find(temp)!=st.end()){
                return true;
            }
            st[temp]=temp->val;
            temp=temp->next;
        }
        return false;
    }
};