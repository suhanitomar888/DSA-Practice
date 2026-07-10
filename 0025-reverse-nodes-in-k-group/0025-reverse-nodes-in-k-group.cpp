class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
         /*
        step 1 -> count k nodes
        check if there are at least k nodes remaining
        if no, then do not reverse just return the current head
        otherwise count
        while(count<k)->
        one pointer that will move till k
        */
        int count=0;
        ListNode*curr=head;
        while(curr!=NULL && count<k){
            curr=curr->next;
            count++;
        }
        if(count==k){
            ListNode*curr=head;
            ListNode*prev=NULL;
            ListNode*nn=NULL;

            count=0;
            while(count<k){
                nn=curr->next;
                curr->next=prev;
                prev=curr;
                curr=nn;
                count++;
            }
            head->next=reverseKGroup(curr, k);
            return prev;
        }
    return head;
    }
};