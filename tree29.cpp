int s(Node *node){
     if(node==NULL)return 0;
    int m=node->data;
    node->data=s(node->left)+s(node->right);
   return node->data+m;
}

void toSumTree(Node *node)
{ s(node);
  // Your code here
}
