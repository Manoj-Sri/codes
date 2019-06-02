void mirror(Node* root) 
{
     // Your Code Here
     struct Node *temp=NULL;
     
     if(root==NULL)return ;
     mirror(root->left);
     mirror(root->right);
     temp=root->left;
     root->left=root->right;
     root->right=temp;
    
    
}
