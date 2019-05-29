
int height(Node * node){int l,r;
    if(node==NULL)return 0;
    
    else{l=height(node->left);
    r=height(node->right);
    if(r>l)return r+1;
    return l+1;}
    
}
bool isBalanced(Node *node)
{if(node==NULL)return 1;
    int lh=height(node->left);
    int rh=height(node->right);
    if(max(rh,lh)-min(rh,lh)<=1&&isBalanced(node->left)&&isBalanced(node->right))return true;
    return false;
    //  Your Code here
}
