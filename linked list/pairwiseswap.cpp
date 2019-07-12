
void pairWiseSwap(struct node *head)
{if(!head || !head->next)
return;
int t=head->data;
head->data=head->next->data;
head->next->data=t;
pairWiseSwap(head->next->next);

}
