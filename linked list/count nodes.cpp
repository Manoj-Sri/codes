Node *temp=head;
    int count=1;
    while(temp->next){
        temp=temp->next;
        count++;
    }
    return count;
