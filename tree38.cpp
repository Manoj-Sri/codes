
bool falg=0;

void pr(Node *root,vector<int> &a,int sum){
    if(root==NULL)return;
     int l=a.size();
        if(sum==root->data){
        for(int i=l-1;i>=0;i--){
            cout<<a[i]<<" ";
 
        }
            return;
        }
       
    a.push_back(root->data);
if(root->left!=NULL)pr(root->left,a,sum);if(root->right!=NULL)pr(root->right,a,sum);
a.pop_back();
    
}
bool printAncestors(struct Node *root, int target)
{  vector<int> a;
    pr(root,a,target);
    cout<<endl;
    bool h=falg;
    falg=0;
    return h;
    
     // Code here
}
