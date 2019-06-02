bool b=true;
int ma=-1;
bool ch(Node *root){
    if(root==NULL)return true;
    ch(root->left);
    if(root->data<=ma)b=false;
    else ma=root->data;
    ch(root->right);
}
bool isBST(Node* root) {
    // Your code here
    ch(root);
    bool f=b;
    b=true;
    ma=-1;
    return f;
}
