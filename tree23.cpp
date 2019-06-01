Node * inOrderSuccessor(Node *root, Node *x)
{Node *s=NULL;
    if(x->right){
        x=x->right;
        s=x;
        while(x->left){
            s=x->left;
            x=x->left;
        }
    }
    if(s)return s;
    while(x!=root){
        if(x->data<root->data){
            s=root;
            root=root->left;
        }
        else{
            root=root->right;
        }
    }
    return s;
    //Your code here
}
