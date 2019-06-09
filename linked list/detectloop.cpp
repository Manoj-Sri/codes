
int detectloop(Node *head) {
   Node *fast=head,*slow=head;
if(head==NULL)
return 0;
while(slow!=NULL&&fast!=NULL && fast->next!=NULL)
{
fast=fast->next->next;
slow=slow->next;
if(slow==fast)
return 1;

}
return 0;
}
