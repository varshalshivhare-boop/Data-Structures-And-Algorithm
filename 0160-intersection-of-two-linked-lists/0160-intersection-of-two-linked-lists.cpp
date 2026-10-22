class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *slow = headA;
        ListNode *fast = headB;
        
        if (!slow || !fast) return NULL;
        
        while (slow != fast) {
            slow = (slow == NULL) ? headB : slow->next;
            fast = (fast == NULL) ? headA : fast->next;
        }
        
        return slow;
    }
};