class Solution {
public:
    Node* solve(Node* temp) {
        if (!temp)
            return NULL;
        Node* last = NULL;
        while (temp) {
            Node* next = temp->next;
            if (temp->child) {
                temp->next = temp->child;
                temp->child->prev = temp;
                Node* tail = solve(temp->child);
                temp->child = NULL;
                if (next) {
                    tail->next = next;
                    next->prev = tail;
                }
                next = tail;
            }
            last = temp;
            temp = next;
        }
        return last;
    }
    Node* flatten(Node* head) {
        solve(head);
        return head;
    }
};