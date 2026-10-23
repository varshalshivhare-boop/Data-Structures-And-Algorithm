class Solution {
public:
    Node* copyRandomList(Node* head) {
        if (head == NULL) return NULL;
        
        unordered_map<Node*, Node*> mp;
        Node* curr = head;
        
        // Sare nodes ki copy bana kar map mein store kar lo (val ke sath)
        while (curr != NULL) {
            mp[curr] = new Node(curr->val);
            curr = curr->next;
        }
        
        curr = head;
    // Next aur Random pointers ko connect karo
        while (curr != NULL) {
            mp[curr]->next = mp[curr->next];
            mp[curr]->random = mp[curr->random];
            curr = curr->next; 
        }
        
        
        return mp[head];
    }
};