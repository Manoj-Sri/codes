
Node *convertToDLL(Node *root,Node **head)
{
    
    static Node *prev=NULL;
    if(!root)return NULL;
    convertToDLL(root->left,head);
   if(!root->left && !root->right){
       if(!(*head)) *head=root;
     else{
         root->left=prev; prev->right=root;
     }
     prev=root;}
     convertToDLL(root->right,head);
//add code here.
}
