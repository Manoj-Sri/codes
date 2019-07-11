
void reverse(struct Node **head)
{
   // Your code goes here
    Node* p=*head;
Node *q=*head;
while(q!=NULL){
p=q;
Node *temp=q->prev;
q->prev=q->next;
q->next=temp;

q=q->prev;
}
*head=p;
}
