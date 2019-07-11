
struct node* makeUnion(struct node* head1, struct node* head2)
{
    // code here
    set<int,greater<int>> s;
    int n=0,m=0;
    while(head1!=NULL){
        s.insert(head1->data);
        head1=head1->next;
        n++;
    }
    while(head2!=NULL){
        s.insert(head2->data);
        head2=head2->next;
    }
    struct node* h=NULL;
   for(auto x:s){
       push(&h,x);
   }
    return h;
}
