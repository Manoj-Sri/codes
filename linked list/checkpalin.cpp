bool isPalindrome(Node *head)
{
    int  n[51];struct Node *node=head;
int coun=0;
while(node!=NULL)
{
n[coun]=node->data;
node=node->next;
coun++;
}
for(int i=0;i<(coun)/2;i++)
{
if(n[i]!=n[coun-i-1])
return false;
}
return true;
}
