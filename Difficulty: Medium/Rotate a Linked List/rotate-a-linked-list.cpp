class Solution {
  public:
    Node* rotate(Node* head, int k) {
        if (!head || !head->next || k == 0) return head;

        // 1. Length calculate karo aur tail node dhoondho
        int n = 1;
        Node* tail = head;
        while (tail->next != NULL) {
            n++;
            tail = tail->next;
        }

        // 2. Extra rotations remove karo
        k = k % n;
        if (k == 0) return head;

        // 3. k-th node tak traverse karo (jo new tail banega)
        Node* curr = head;
        for (int i = 1; i < k; i++) {
            curr = curr->next;
        }

        // 4. Connections update karo
        Node* newHead = curr->next; // (k+1)-th node naya head hai
        curr->next = NULL;         // k-th node ka next NULL set karo
        tail->next = head;         // purane tail ko purane head se connect karo

        return newHead;
    }
};