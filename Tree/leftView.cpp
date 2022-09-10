/* root left right */
void traversal(Node* root, int level, vector<int> &ds){
    if(root==nullptr) return;
    
    if(level == ds.size()) ds.push_back(root->data);
    
    traversal(root->left, level+1,ds);
    traversal(root->right, level+1,ds);
    return;
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int> ds;
   traversal(root, 0, ds);
   return ds;
}
