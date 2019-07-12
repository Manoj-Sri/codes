
Node *zigZack(Node* head)
{if(head == NULL || head->next == NULL)
return head;
else
{
int a = head->data;
int b = head->next->data;
head->data = min(a,b);
head->next->data = max(a,b);
if(head->next->next)
{
if(head->next->next->data > head->next->data)
swap(head->next->next->data,head->next->data);
}
}
head->next->next = zigZack(head->next->next);
return head;
}
