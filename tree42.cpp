void serialize(Node *root,vector<int> &A)
{
    if(root){
         serialize(root->left,A); 
         
        A.push_back(root->data);
       
        serialize(root->right,A);
    }
    //Your code here
}
/*this function deserializes
 the serialized vector A*/
Node * deSerialize(vector<int> &A)
{
   Node *root;return root;
   //Your code here
}
