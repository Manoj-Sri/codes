Node* rotate(Node* head, int k) {
    // Your code here
    Node *temp=head,*temp2=head;
    while(temp->next){
        temp=temp->next;
    }
   temp->next= head;
    k=k-1;
    while(k--){
      temp2=temp2->next;
    }
    head=temp2->next;
    temp2->next=NULL;
    
   return head; 
    
    
}
