
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
    if(l==1)return 1;
    else {
        return getw(root->left,l-1)+getw(root->right,l-1);
    }
    
}
int getMaxWidth(Node* root)
{int h=height(root);
int mw=0;int w;
for(int i=1;i<=h;i++){
    w=getw(root,i);
    if(w>mw)mw=w;
}
return mw;
    
   // Your code here
}
