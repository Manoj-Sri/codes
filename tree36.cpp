void pr(Node *root,vector<int> &a){
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL){
        a.push_back(root->data);
        int l=a.size();
        for(int i=0;i<l;i++){
            cout<<a[i]<<" ";
        }
        cout<<"#";
        a.pop_back();
        return ;
    }
    a.push_back(root->data);
if(root->left!=NULL)pr(root->left,a);if(root->right!=NULL)pr(root->right,a);
a.pop_back();
    
}
void printPaths(Node* root)
{
    vector<int> a;
    pr(root,a);
    cout<<endl;
}
