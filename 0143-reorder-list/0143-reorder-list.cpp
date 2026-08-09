class Solution {
public:
    void reorderList(ListNode* head) 
    {
        // Step 1: Saare nodes vector mein store karo
        vector<ListNode*> v;

        ListNode* temp = head;

        while (temp != nullptr)
        {
            v.push_back(temp);
            temp = temp->next;
        }

        // Step 2: Front aur back ke pairs banao
        vector<pair<ListNode*, ListNode*>> pairs;

        int i = 0;
        int j = v.size() - 1;

        while (i <= j)
        {
            pairs.push_back({v[i], v[j]});

            i++;
            j--;
        }

        // Step 3: Pairs ko reorder karke linked list banao
        ListNode* newHead = nullptr;
        ListNode* tail = nullptr;

        for (auto p : pairs)
        {
            ListNode* first = p.first;
            ListNode* second = p.second;

            // First node add karo
            if (newHead == nullptr)
            {
                newHead = first;
                tail = first;
            }
            else
            {
                tail->next = first;
                tail = first;
            }

            // Second node add karo
            // Agar first == second hai, to duplicate nahi karna
            if (first != second)
            {
                tail->next = second;
                tail = second;
            }
        }

        // Last node ka next NULL
        tail->next = nullptr;

        // Original head ko reordered head se update
        head = newHead;
    }
};