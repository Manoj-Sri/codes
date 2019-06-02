int sum=0;

int su(Node *root){
    if(root==NULL)return 0;
    if(root->left==NULL&&root->right==NULL)sum+=root->data;
    su(root->left);
    su(root->right);
    return sum;
}
int sumLeaf(Node* root)
{su(root);
    int hi=sum;sum=0;
    return hi;
}
