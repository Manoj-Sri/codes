
map < int , int > mp;
void pr(Node *node,int sum){
    if(node==NULL)return;
    mp[sum]+=node->data;
    pr(node->left,sum-1);
    pr(node->right,sum+1);
}
void printVertical(Node *root)
{pr(root,0);
for(auto &x:mp)cout<<x.second<<" ";
mp.clear();
}
