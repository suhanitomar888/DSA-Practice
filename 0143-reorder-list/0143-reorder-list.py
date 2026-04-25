class Solution:
    def reorderList(self, head):
        if not head or not head.next:
            return
        # Step 1: find middle
        slow, fast = head, head
        while fast and fast.next:
            slow, fast = slow.next, fast.next.next
        # Step 2: reverse second half
        prev, curr = None, slow
        while curr:
            nxt = curr.next
            curr.next = prev
            prev, curr = curr, nxt
        # Step 3: merge halves
        first, second = head, prev
        while second.next:
            first.next, first = second, first.next
            second.next, second = first, second.next