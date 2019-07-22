int height(Node * root){
    int l,r;
    
    if(root==NULL)return 0;
    
    l=height(root->left);
    r=height(root->right);
    if(l>r)return l+1;
    return r+1;
}
int getw(Node *root,int l,bool rota){
    if(root==NULL)return 0;
    if(l==1)cout<<root->data<<" ";
    else {
        if(rota){getw(root->left,l-1,rota);
    getw(root->right,l-1,rota);}
    else{getw(root->right,l-1,rota);
        getw(root->right,l-1,rota);
    }
    }
    
}
void printSpiral(Node* root)
{
    int h=height(root);
int mw=0;int w;bool rota=false;
for(int i=1;i<=h;i++){
    getw(root,i,rota);rota=~rota;
}
}
//optimised using two stacks in O(n)

if (root == NULL) 
        return; // NULL check 
  
    // Create two stacks to store alternate levels 
    stack<struct node*> s1; // For levels to be printed from right to left 
    stack<struct node*> s2; // For levels to be printed from left to right 
  
    // Push first level to first stack 's1' 
    s1.push(root); 
  
    // Keep printing while any of the stacks has some nodes 
    while (!s1.empty() || !s2.empty()) { 
        // Print nodes of current level from s1 and push nodes of 
        // next level to s2 
        while (!s1.empty()) { 
            struct node* temp = s1.top(); 
            s1.pop(); 
            cout << temp->data << " "; 
  
            // Note that is right is pushed before left 
            if (temp->right) 
                s2.push(temp->right); 
            if (temp->left) 
                s2.push(temp->left); 
        } 
  
        // Print nodes of current level from s2 and push nodes of 
        // next level to s1 
        while (!s2.empty()) { 
            struct node* temp = s2.top(); 
            s2.pop(); 
            cout << temp->data << " "; 
  
            // Note that is left is pushed before right 
            if (temp->left) 
                s1.push(temp->left); 
            if (temp->right) 
                s1.push(temp->right); 
        } 
    } 
