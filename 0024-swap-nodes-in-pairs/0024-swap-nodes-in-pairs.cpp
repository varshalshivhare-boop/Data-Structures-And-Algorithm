class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (!head || !head->next) return head;

        ListNode dummy(0);
        dummy.next = head;
        ListNode* prev = &dummy;

        while (prev->next && prev->next->next) {
            ListNode* first = prev->next;
            ListNode* second = prev->next->next;

            // Pointers swap karein
            first->next = second->next;
            second->next = first;
            prev->next = second;

            // Pointer aage badhayein
            prev = first;
        }

        return dummy.next;
    }
};