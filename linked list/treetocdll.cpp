
void inorder(Node* root, vector<int>& v) 
{ 
    if (!root) 
        return; 
   inorder(root->left, v); 
   v.push_back(root->data); 
   inorder(root->right, v); 
} 
Node* bTreeToCList(Node* root) 
{  if (root == NULL) 
        return NULL; 
   vector<int> v; 
   inorder(root, v); 
   Node* head = new Node(v[0]); 
   Node* curr = head; 
   for (int i = 1; i < v.size(); i++) { 
        Node* temp = curr; 
        curr->right = new Node(v[i]); 
        curr = curr->right; 
        curr->left = temp; 
    } 
      curr->right = head; 
   head->left = curr; 
   return head; 
} 
  
