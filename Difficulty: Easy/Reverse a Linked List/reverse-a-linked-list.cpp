class Solution {
public:
    Node* reverseList(Node* head) {
        Node* prev = NULL;   // Pehle piche kuch nahi hai, isliye NULL
        Node* curr = head;   // Current node start se initialize hoga

        while (curr != NULL) {
            Node* nextNode = curr->next;  // 1. Agle node ka address save karo
            curr->next = prev;               // 2. Arrow ko ulta (piche) ghuma do
            prev = curr;                     // 3. 'prev' ko ek kadam aage badhao
            curr = nextNode;                 // 4. 'curr' ko bhi aage badhao
        }

        return prev; // Jab loop khatam hoga, 'prev' naya head ban jayega
    }
};