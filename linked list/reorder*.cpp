
#include<vector>
void reorderList(Node* head) 
{Node *p=head;
vector<int> v,m;
while(p){
v.push_back(p->data);
p=p->next;
}
auto a=v.begin();
auto b=v.end()-1;
while(b>a){
m.push_back(*(a));
m.push_back(*(b));
a++;
b--;
}
int t=v.size();
if(t%2!=0){
m.push_back(*(a));
}
p=head;
auto k=m.begin();
while(t--){
p->data=*(k);
k++;
p=p->next;
}
return;
}
