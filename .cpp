Node* findIntersection(Node* head1, Node* head2)
{
   Node* ptr1=head1;
   Node* ptr2 = head2;
   Node* head = NULL;
   Node* cur = NULL;
   
   
   while(ptr1 and ptr2){
       if(ptr1->data==ptr2->data){
           if(head==NULL){
               Node* one = new Node(ptr1->data);
               head = one;
               cur = one;
           }
           
           else{
               Node* one = new Node(ptr1->data);
               cur->next=one;
               cur=cur->next;
           }
           
           ptr1=ptr1->next;
           ptr2=ptr2->next;
       }
       
       else{
           if(ptr1->data<ptr2->data){
               ptr1=ptr1->next;
           }
           
           else{
               ptr2=ptr2->next;
           }
       }
   }
   
   return head;
}
