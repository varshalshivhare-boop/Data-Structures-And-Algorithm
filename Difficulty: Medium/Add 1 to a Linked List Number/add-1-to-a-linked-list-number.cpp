class Solution {
  public:
    Node* addOne(Node* head) {
       int get=adding(head);
       if(get==1){
       Node* king=new Node(1);
       king->next=head;
       return king;
       }
       return head;
    }
    int adding(Node* head){
       if(!head) return 1;
       head->data=head->data+adding(head->next);
       if(head->data>9){
           head->data=0;
           return 1;
       } return 0;
    }
};