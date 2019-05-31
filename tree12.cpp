bool c(struct Node *root,int l,int *ll){
    if(root==NULL)return true;;
    if((root->left==NULL)&&(root->right==NULL)){
        if(*ll==0){
            *ll=l;
            return true;
        }
       return (l==*ll);
    }
    return c(root->left,l+1,ll)&&c(root->right,l+1,ll);
}

bool check(Node *root)
{
  int l=0;int ll=0;
  return c(root,l,&ll);//Your code here
}
