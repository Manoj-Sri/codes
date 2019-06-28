#include<bits/stdc++.h>
using namespace std;

struct node{
    int data;
    struct node *right;
    struct node *left;
};

node* newNode(int data)  
{  
    node* n = new node(); 
    n->data = data;  
    n->left = NULL;  
    n->right = NULL;  
  
    return n;  
}  
node* sortedArrayToBST(int arr[],  
                        int start, int end)  
{  
    if (start > end)  
    return NULL;  
   int mid = (start + end)/2;  
    node *root = newNode(arr[mid]);  
   root->left = sortedArrayToBST(arr, start, mid - 1);  
   root->right = sortedArrayToBST(arr, mid + 1, end);  
 return root;  
}  
void preOrder(node* node)  
{  
    if (node == NULL)  
        return;  
    cout << node->data << " ";  
    preOrder(node->left);  
    preOrder(node->right);  
}  

int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    node *root=sortedArrayToBST(arr,0,n-1);
	       preOrder(root); 
	       cout<<endl;
	}
	return 0;
}
