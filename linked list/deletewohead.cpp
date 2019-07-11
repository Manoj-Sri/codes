void deleteNode(Node *node)
{
   // Your code here
   Node *t=node->next;
   node->data=t->data;
   node->next=node->next->next;
   free(t);
}
