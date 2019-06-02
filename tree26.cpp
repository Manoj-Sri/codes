bool is(struct node* n1,struct node *n2){
    if(n1==NULL&&n2==NULL)return true;
      if(n1==NULL||n2==NULL)return false;
      return (is(n1->left,n2->right)&&is(n1->right,n2->left));
    
}

bool isFoldable(struct node *root)
{
    
    if(root==NULL)return true;
   return  is(root->left,root->right);
  // Your code goes here
}
