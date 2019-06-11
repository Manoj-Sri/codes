void mergeList(struct Node **p, struct Node **q)
{
     // Code here
     struct Node *t1,*t2,*temp1,*temp2;
     t1=*p;
     t2=*q;
     while(t1!=NULL&&t2!=NULL){
         temp1=t1->next;
         t1->next=t2;
         temp2=t2->next;
         t2->next=temp1;
         t1=temp1;
         t2=temp2;
     }
     *q=t2;
}
