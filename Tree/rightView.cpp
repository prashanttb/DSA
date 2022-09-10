    /* root right left */
    void traversal(Node* root, int level, vector<int>& ds){
        if(root==nullptr) return;
        
        if(level == ds.size()) ds.push_back(root->data);
        traversal(root->right,level+1,ds);
        traversal(root->left,level+1,ds);
        return;
    }
    
    vector<int> rightView(Node *root)
    {
       // Your Code here
       vector<int> ds;
       traversal(root,0,ds);
       return ds;
    }