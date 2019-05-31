
void leaves(struct Node* root) 
{ 
    if (root) { 
        leaves(root->left); 
   if (!(root->left) && !(root->right)) 
            printf("%d ", root->data); 
  
        leaves(root->right); 
    } 
} 
  
void bleft(Node* root) 
{ 
    if (root) { 
        if (root->left) { 
            printf("%d ", root->data); 
            bleft(root->left); 
        } 
        else if (root->right) { 
            printf("%d ", root->data); 
            bleft(root->right); 
        } 
    } 
} 
void bright(Node* root) 
{ 
    if (root) { 
        if (root->right) { 
            bright(root->right); 
            printf("%d ", root->data); 
        } 
        else if (root->left) { 
            bright(root->left); 
            printf("%d ", root->data); 
        } 
       } 
} 
void printBoundary(Node* root) 
{ 
    if (root) { 
        printf("%d ", root->data); 
   bleft(root->left); 
   leaves(root->left); 
       leaves(root->right); 
  
      bright(root->right); 
    } 
} 
