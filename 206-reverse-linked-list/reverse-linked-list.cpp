/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL) return head;

        ListNode* temp=head;
         ListNode* ans=new ListNode(temp->val,NULL);
         temp=temp->next;

         while(temp!=NULL){
            ListNode* newnode=new ListNode(temp->val,ans);
            ans=newnode;
            temp=temp->next;
         }

         return ans;
           
    }
};