int height(Node* node)
{
    if(node==NULL)return 0;
    else{
        int l=height(node->left);
        int r=height(node->right);
        if(l>r)return l+1;
        return r+1;
    }
   // Your code here
}
