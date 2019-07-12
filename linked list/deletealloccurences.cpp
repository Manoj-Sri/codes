Node* deleteAllOccurances(Node *head,int x)
{
    //Your code here
    Node *temp=head;
    if(temp->data==x)head=head->next;
    while(temp->next){
        if(temp->next->data==x){
            temp->next=temp->next->next;
        }
        else {
            temp=temp->next;
        }
    }
    return head;
}
