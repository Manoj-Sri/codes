
Node* reverseList(Node *head)
{
  // Your code here
Node *current = head;
Node *prev = NULL;

while(current!=NULL){
head = current->next;
current->next = prev;
prev = current;
current = head;
}
return prev;
}
