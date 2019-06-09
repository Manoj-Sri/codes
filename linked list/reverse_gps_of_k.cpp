
struct node *reverse (struct node *head, int k)
{ 
    
    struct node *curr=head;
    struct node *pre=NULL,*next=NULL;
    int count=0;
    while(curr&&count<k){
        next=curr->next;
        curr->next=pre;
        pre=curr;
        curr=next;count++;
    }
    if(next!=NULL)head->next=reverse(next,k);
    return pre;
  // Complete this method
}
