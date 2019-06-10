void intersection(Node **head1, Node **head2,Node **head3)
{int arr[1000]={0};
    struct Node * temp=*head1;
    struct Node * temp2=*head2;
    while(temp){
       arr[temp->val]=1;
       temp=temp->next;
    }
    while(temp2){
        if(arr[temp2->val]==1)arr[temp2->val]=-1;
        temp2=temp2->next;
    }
    
    for(int i=0;i<1000;i++){
        if(arr[i]==-1){
            push(head3,i);
        }
    }
    
    
    // Your Code Here
}
