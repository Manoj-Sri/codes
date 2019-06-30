bool mat[MAX][MAX]; 
int ancestorMatrixRec(Node *root, vector<int> &anc) 
{ if (root == NULL) return 0;; 
  int data = root->data; 
    for (int i=0; i<anc.size(); i++) 
       mat[anc[i]][data] = true; 
 anc.push_back(data); 
 int l = ancestorMatrixRec(root->left, anc); 
    int r = ancestorMatrixRec(root->right, anc); 
   anc.pop_back(); 
  
    return l+r+1; 
}

void ancestorMatrix(Node *root) 
{ vector<int> anc; 
int n = ancestorMatrixRec(root, anc); 
for (int i=0; i<n; i++) 
    { 
        for (int j=0; j<n; j++) 
            cout << mat[i][j] << " "; 
        cout << endl; 
    } 
} 
