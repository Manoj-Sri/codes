void alternatingSplitList(struct node* headRef, struct node** aRef, struct node** bRef)
{if(headRef==NULL)
{
return;
}
int n=1;
while(headRef!=NULL)
{
if(n%2!=0)
{
append(aRef, headRef->data);
}
else
{
append(bRef, headRef->data);
}
n++;
headRef=headRef->next;
    // Code here
    }
}
