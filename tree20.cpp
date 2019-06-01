void doble(node* Node)  
{  
    node* oldLeft;  
      
    if (Node == NULL) return;  
    doble(Node->left);  
    doble(Node->right);  
      
    /* duplicate this node to its left */
    oldLeft = Node->left;  
    Node->left = newNode(Node->data);  
    Node->left->left = oldLeft;  
}  
