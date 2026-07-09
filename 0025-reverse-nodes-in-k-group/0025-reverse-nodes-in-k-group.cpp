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
        ListNode*curr=head;
        int count=0;
        while(curr!=NULL && count < k){
            curr=curr->next;
            count++;
        }
        if(count==k){
            //reverse first k nodes
            ListNode*prev=NULL;
            ListNode*curr=head;
            ListNode*nextNode=NULL;
            int  count2=0;

            while(count2 < k){
                nextNode= curr->next;
                curr->next=prev;
                prev=curr;
                curr=nextNode;
                count2++;
            }
            head->next=reverseKGroup(curr, k);
            return prev;   
        }
        return head;
    }
};