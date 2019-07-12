Node* segregate(Node *head) {
    
    // Add code here
    int count_1,count_2,count_0;
    count_0=count_1=count_2=0;
    Node* temp=head;
    while(temp!=NULL)
    {
        if(temp->data==0)
            count_0++;
        else if(temp->data==1)
            count_1++;
        else
            count_2++;
        temp=temp->next;
    }
    temp=head;
    while(count_0 || count_1 || count_2)
    {
        while(count_0)
        {
            temp->data=0;
            temp=temp->next;
            count_0--;
        }
        while(count_1)
        {
            temp->data=1;
            temp=temp->next;
            count_1--;
        }
        while(count_2)
        {
            temp->data=2;
            temp=temp->next;
            count_2--;
        }
    } 
    return head;
}
