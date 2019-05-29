int countLeaves(Node* root)
{int l,r;
    if(root==NULL)return 0;
    else if(root->left==NULL&&root->right==NULL)return 1;
    else{
       l= countLeaves(root->left);
     r=countLeaves(root->right);
        
    }
    return l+r;
  // Your code here
}
