Node* sortedMerge(Node* head1,   Node* head2)
{
    // Your Code Here
 if(head1==NULL)return head2;
 if(head2==NULL)return head1;
 if(head1->data>head2->data){
     head2->bottom=sortedMerge(head1,head2->bottom);
     return head2;
 }
 if(head1->data<=head2->data){
     head1->bottom=sortedMerge(head1->bottom,head2);
     return head1;
 }

    
}


Node *flatten(Node *root)
{
   // Your code here
   if(root==NULL||root->next==NULL){
       return root;
   }
  return sortedMerge(root,flatten(root->next));
}
