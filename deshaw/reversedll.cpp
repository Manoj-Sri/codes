void reverse(Node **head)
{
   // Your code goes here
   Node *p=*head;
   Node *q=*head;
   while(q){
       p=q;
       Node *temp;
       temp=q->prev;
       q->prev=q->next;
       q->next=temp;
       q=q->prev;
   }
   *head=p;
}
