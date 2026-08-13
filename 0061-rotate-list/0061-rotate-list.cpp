class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // 1. Length calculate karo aur tail node dhoondho
        int n = 1;
        ListNode* tail = head;
        while (tail->next != NULL) {
            n++;
            tail = tail->next;
        }

        // 2. Extra rotations remove karo
        k = k % n;
        if (k == 0) return head;

        // 3. (n - k)-th node tak traverse karo (jo new tail banega)
        ListNode* curr = head;
        for (int i = 1; i < n - k; i++) {
            curr = curr->next;
        }

        // 4. Connections update karo
        ListNode* newHead = curr->next; // New head
        curr->next = NULL;              // New tail ka next NULL set karo
        tail->next = head;              // Purane tail ko purane head se connect karo

        return newHead;
    }
};