 struct node *first,*last,*prv;
    
void swap(node* x,node* y)
{
    int temp=x->data;
    x->data=y->data;
    y->data=temp;
}
void error(node *root){
    if(root){
        error(root->left);
        if(prv!=NULL&&prv->data>root->data){
            if(first==NULL)first=prv;
            last=root;
        }
        prv=root;
        error(root->right);
        
    }
}
struct node *correctBST( struct node* root )
{first=last=prv=NULL;
error(root);
    swap(first,last);
    return root;
//add code here.
}
