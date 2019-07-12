Node *swapkthnode(Node* head, int num, int K)
{
    // If k is more than number of nodes
    if (K > num) 
      return head;
    
    // If k-th node from beginning and
    // end are same.
    if(2*K-1 == num) return head;
    
    Node* x_prev = NULL;
    Node* x = head;
    
    Node* y_prev = NULL;
    Node* y = head;
    
    int count = K-1;
    while(count--){
        x_prev = x;
        x = x->next;
    }
    
    count = num - K;
    while(count--){
        y_prev = y;
        y = y->next;
    }
    
    if(x_prev)
        x_prev->next = y;
    if(y_prev)
        y_prev->next = x;
        
    Node* temp = x->next;
    x->next = y->next;
    y->next = temp;
    
    if(K == 1)
        return y;
    if(K == num)
        return x;
    return head;    
}
