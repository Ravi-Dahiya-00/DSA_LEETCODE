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
    ListNode* oddEvenList(ListNode* head) {

        if(head==NULL || head->next==NULL) return head;

        ListNode* even=new ListNode();
        ListNode* odd=new ListNode();

        ListNode* evenTail = even;
        ListNode* oddTail = odd;

        ListNode* temp=head;
        int count=1;
        while(temp!=NULL){
            if(count%2!=0){
                oddTail->next=temp;
                oddTail=oddTail->next;
            }
            else{
                evenTail->next=temp;
                evenTail=evenTail->next;
            }
            temp=temp->next;
            count++;
        }

        evenTail->next=NULL;
        oddTail->next=even->next;

        return odd->next;
    }
};