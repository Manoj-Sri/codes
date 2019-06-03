bool f(node* root,int sum,set<int> &set){
if(root==NULL)return false;
if(f(root->left,sum,set))return true;
if(set.find(sum-root->val)!=set.end()){
    return true;
}
else set.insert(root->val);return f(root->right,sum,set);
}

bool isPairPresent(struct node *root, int target)
{ set<int> set; 
    return f(root, target, set);
//add code here.
}
