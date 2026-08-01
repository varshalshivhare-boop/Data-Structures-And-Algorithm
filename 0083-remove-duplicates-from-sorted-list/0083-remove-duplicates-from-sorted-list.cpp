/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
    ListNode *a =head;
    if(a==NULL)
    return head;
    ListNode * b=head->next;
    
    

    while(a!=NULL && b!=NULL){
        
        if(b->val==a->val){
            a->next=b->next;
            b=b->next;
        }
        else{
            a=a->next;
            b=b->next;
        }
    
    
     }
    
    
     return head;
}
      
    };