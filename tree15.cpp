
int h(Node *root){
    
    if(root==NULL)return 0;
   
   int l=h(root->left);
    int r=h(root->right);
    if(l>r)return l+1;
    return r+1;
}
void ltor(Node *root,int level){
    if(root==NULL||level==0)return ;
  
     if(level==1)cout<<root->data<<" ";
     else if(level>1){
         ltor(root->left,level-1);
         ltor(root->right,level-1);
    }
}
void rtol(Node *root,int level){
    if(root==NULL||level==0)return ;
    
     if(level==1)cout<<root->data<<" ";
     else if(level>1){
         rtol(root->right,level-1);
        rtol(root->left,level-1);
     }
    
}
void zigZagTraversal(Node* root)
{int he=h(root);
int flag=0;
for(int i=1;i<=he;i++){
    if(flag==1){
        rtol(root,i);
        flag=0;
        
    }
    else if(flag==0){
        ltor(root,i);
        flag=1;
        
    }
}
cout<<endl;
}
