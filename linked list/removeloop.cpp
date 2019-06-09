void removeTheLoop(Node *head)
{
   Node *fast=head,*slow=head,*pt;

while(slow!=NULL&&fast!=NULL && fast->next!=NULL)
{
    pt=fast;
fast=fast->next->next;

slow=slow->next;

if(slow==fast){slow = head; 
        while (slow->next != fast->next) 
        { 
            slow = slow->next; 
            fast = fast->next; 
        } 
   fast->next = NULL; 
break;
}
}
 //Your code here
}

