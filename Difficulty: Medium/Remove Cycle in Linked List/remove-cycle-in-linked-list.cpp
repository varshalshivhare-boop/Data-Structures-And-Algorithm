/* Structure of Linked List Node
class Node {
  public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = nullptr;
    }
};
*/
class Solution {
public:
    void removeLoop(Node* head) {

        if (head == NULL || head->next == NULL)
            return;

        Node* slow = head;
        Node* fast = head;

        // Step 1: Detect Cycle
        while (fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast)
                break;
        }

        // Agar cycle hi nahi hai
        if (fast == NULL || fast->next == NULL)
            return;

        // Step 2: Find starting node of cycle
        slow = head;

        while (slow != fast) {
            slow = slow->next;
            fast = fast->next;
        }

        // Step 3: Find last node of cycle
        Node* temp = slow;

        while (temp->next != slow) {
            temp = temp->next;
        }

        // Step 4: Remove cycle
        temp->next = NULL;
    }
};