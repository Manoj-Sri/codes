void l(Node *root,int *ma,int level){
    if(root==NULL)return ;
    if(*ma<level){
        cout<<root->data<<" ";
        *ma=level;
    }

        l(root->left,ma,level+1);
        l(root->right,ma,level+1);
 
}

void leftView(Node *root)
{int ma=0;int le=1;
l(root,&ma,le);
   // Your code here
}
