/* Structure of Linked List Node
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        Node *slow=head;
        Node *fast =head;
        int count;
        while(fast!=NULL&& fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
            
            
            // cycle mil jana
            if(slow==fast){ // mil gyi
            count=1;
            Node *temp=slow;
            
            while(temp->next!=slow){
               count++;
                temp=temp->next;
                
            }
            return count;
            }
        }
    
    
    return 0;
    }
};