int intersectPoint(Node* head1, Node* head2)
{
  Node *temp = head1;
while(temp){
temp->data = -1 * temp->data;
temp = temp->next;
}
temp = head2;
int ans = -1;
while(temp){
if(temp->data < 0){
ans = -temp->data;
break;
}
temp = temp->next;
}
return ans;  
    // Your Code Here
}
