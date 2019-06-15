bool falg=0;

void pr(Node *root,vector<int> &a,int sum){
    if(root==NULL)return;
    if(root->left==NULL&&root->right==NULL){
        a.push_back(root->data);
        int l=a.size();
        int t=0;
        for(int i=0;i<l;i++){
            //cout<<a[i]<<" ";
        t+=a[i];
        
        }
        if(sum==t)falg=1;
        a.pop_back();
        return ;
    }
    a.push_back(root->data);
if(root->left!=NULL)pr(root->left,a,sum);if(root->right!=NULL)pr(root->right,a,sum);
a.pop_back();
    
}
bool hasPathSum(Node *root, int sum)
{
     vector<int> a;
    pr(root,a,sum);
    bool h=falg;
    falg=0;
    return h;
    
   //Your code her
}
