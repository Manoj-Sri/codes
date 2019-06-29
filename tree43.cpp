
int search(int arr[],int s,int e,int h){
    for(int i=s;i<=e;i++){
        if(arr[i]==h)return i;
    }
    return -1;
}
int p=0;
Node* buildTree(int in[],int pre[], int s, int e)
{
  if(s>e)return NULL;
  Node *root=newNode(pre[p++]);
  if(s==e)return root;
  int i=search(in,s,e,root->data);
    root->left=buildTree(in,pre,s,i-1);
  root->right=buildTree(in,pre,i+1,e);
  p=0;
  return root;
    
}
