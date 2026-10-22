class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        while (head != nullptr && head->val == val) {
            head = head->next;
        }

        if (head == nullptr) return head;

        ListNode* slow = head;
        ListNode* fast = head->next;

        while (fast != nullptr) {
            if (fast->val == val) {
                slow->next = fast->next;
                fast = slow->next;
            } else {
                slow = fast;
                fast = fast->next;
            }
        }

        return head;
    }
};