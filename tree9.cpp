int height(Node * root){
    int l,r;
    
    if(root==NULL)return 0;
    
    l=height(root->left);
    r=height(root->right);
    if(l>r)return l+1;
    return r+1;
}
int getw(Node *root,int l,bool rota){
    if(root==NULL)return 0;
    if(l==1)cout<<root->data<<" ";
    else {
        if(rota){getw(root->left,l-1,rota);
    getw(root->right,l-1,rota);}
    else{getw(root->right,l-1,rota);
        getw(root->right,l-1,rota);
    }
    }
    
}
void printSpiral(Node* root)
{
    int h=height(root);
int mw=0;int w;bool rota=false;
for(int i=1;i<=h;i--){
    getw(root,i,rota);rota=~rota;
}
}
