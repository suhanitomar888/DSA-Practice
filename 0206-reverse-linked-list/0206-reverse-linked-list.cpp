class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode*prev=nullptr;
        ListNode*curr=head;
        while(curr!=nullptr){
            ListNode*nn=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nn;
        }
        return prev;
    }
};           
