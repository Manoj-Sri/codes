if(head == NULL || head->next ==NULL)
return NULL;
Node *fast = head->next, *slow=head;
while(fast->next && fast->next->next)
{
fast = fast->next->next;
slow = slow->next;
}
slow->next = slow->next->next;
return head;
