void m(Node *root,int *s){
    if(root==NULL)return ;
    m(root->right,s);
    *s+=root->data;
    root->data=*s;
    m(root->left,s);
    
}

void modify(Node **root)
{
    int s=0;
    m(*root,&s);
// Your code here
}
