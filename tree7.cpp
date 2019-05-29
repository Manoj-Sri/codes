
int height(Node * root){
    int l,r;
    
    if(root==NULL)return 0;
    
    l=height(root->left);
    r=height(root->right);
    if(l>r)return l+1;
    return r+1;
}
int getw(Node *root,int l){
    if(root==NULL)return 0;
    if(l==1)cout<<root->data<<" ";
    else { getw(root->left,l-1);
    getw(root->right,l-1);
    }
    
}
void levelOrder(Node* root)
{
    int h=height(root);
int mw=0;int w;
for(int i=1;i<=h;i++){
    getw(root,i);
}
}
