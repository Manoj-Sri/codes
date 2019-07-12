Node *copyList(Node *head) {
    // Your code here
    
Node* c=new Node(head->data);
Node* d=c;
map<int,pair< Node*,Node*> >m;
int i=0;
while(head!=NULL)
{ 
m[i++]={head->next,head->arb};

head=head->next; 
}
for(auto i:m)
{
c->next=i.second.first;
c->arb=i.second.second;
c=c->next; 
}

return d;
}
