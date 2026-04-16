class Solution {
public:
    ListNode* reverseLL(ListNode* head) {

        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* ahead = NULL;
        while (curr != NULL) {
            ahead = curr->next;
            curr->next = prev;
            prev = curr;
            curr = ahead;
        }
        return prev;
    }

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        int countNodesInL1 = 0;
        int countNodesInL2 = 0;
        l1 = reverseLL(l1);
        l2 = reverseLL(l2);
        ListNode* dummy1 = new ListNode(0);
        dummy1->next = l1;
        ListNode* dummy2 = new ListNode(0);
        dummy2->next = l2;
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        ListNode* prev1 = dummy1;
        ListNode* prev2 = dummy2;

        int carry = 0;

        // Instead of counting which LL is longer by traversing both the LL,
        // update the added value in both of them and keep counting the nodes.
        // At last when carry is not equal to zero add new Node to that LL which
        // is longer

        while (temp1 && temp2) {
            int x = temp1->val + temp2->val + carry;
            int nodeVal = x % 10;
            carry = x / 10;
            temp1->val = nodeVal;
            temp2->val = nodeVal;
            temp1 = temp1->next;
            temp2 = temp2->next;
            countNodesInL1++;
            countNodesInL2++;
            prev1 = prev1->next;
            prev2 = prev2->next;
        }

        // If temp1 exists then it means that l1 is longer in lenth than  l2

        while (temp1) {
            int x = temp1->val + carry;
            int nodeVal = x % 10;
            carry = x / 10;
            temp1->val = nodeVal;

            temp1 = temp1->next;
            countNodesInL1++;
            prev1 = prev1->next;
        }
        // If temp2 exists then it means that l2 is longer in lenth than  l1

        while (temp2) {
            int x = temp2->val + carry;
            int nodeVal = x % 10;
            carry = x / 10;
            temp2->val = nodeVal;

            temp2 = temp2->next;
            countNodesInL2++;
            prev2 = prev2->next;
        }

        // Append new Node to the List which is longer in length. If both lists
        // were same in length then both temp1 and temp2 are NULL so temp-> next
        // will give error. Hence use prev1 and prev2

        while (carry) {
            ListNode* newNode = new ListNode(carry);
            carry /= 10;
            if (countNodesInL1 >= countNodesInL2) {
                prev1->next = newNode;
                prev1 = prev1->next;
                countNodesInL1++;
            } else {

                prev2->next = newNode;
                prev2 = prev2->next;
                countNodesInL2++;
            }
        }

        // Added result will be stored in the longest LL. So reverse that LL and
        // return it's head

        if (countNodesInL1 >= countNodesInL2) {
            l1 = reverseLL(l1);
            return l1;

        } else {

            l2 = reverseLL(l2);
            return l2;
        }
    }
};