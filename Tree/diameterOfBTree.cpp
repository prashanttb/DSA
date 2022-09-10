//O(n^2)
    int height(Node* root){
        if(root==nullptr) return 0;
        return 1+max(height(root->left),height(root->right));
    }
    
    int diameter(Node* root) {
        // Your code here
        if(root==nullptr) return 0;
        
         int ld = diameter(root->left);
         int rd = diameter(root->right);
         
         int curr = height(root->left)+height(root->right)+1;
         return max(curr,max(ld,rd));
    }

//O(n)
int ans=0;

int height(Node* root){
    if(root==null) return 0;

    int lh = height(root->left);
    int rh = height(root->right);

    ans = max(ans,1+lh+rh);

    return 1+max(lh,rh);
}