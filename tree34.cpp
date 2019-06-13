vector<int> v;
vector<Node*> nd;
void utili(struct Node* np)
{
if(np==NULL)
{
return;
}
utili(np->left);
v.push_back(np->data);
nd.push_back(np);
utili(np->right);
}
struct Node *correctBST( struct Node* root )
{
    v.clear();
    nd.clear();
    utili(root);
    vector<int> a;
    a=v;
    sort(a.begin(),a.end());
    for(int i=0;i<v.size();i++){
        if(a[i]!=v[i]){
            nd[i]->data=a[i];
        }
    }
    //add code here.
    return root;
}
