int height(Node * node){ 
   if(node == NULL) 
       return 0; 
    return 1 + max(height(node->left), height(node->right)); 
}
int diameter(Node* node)
{if(node == NULL) 
       return 0; 
  
    int l,r,ld,rd;
    l=height(node->left);
    r=height(node->right);
    ld=diameter(node->left);
    rd=diameter(node->right);
    return max(max(rd,ld),(r+l+1));
   // Your code here
}
