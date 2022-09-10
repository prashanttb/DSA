//using level order traversal

vector <int> bottomView(Node *root) {
        // Your Code Here
        vector<int> ans;
        if(root==nullptr) return ans;
        queue<pair<Node*,int>> q;
        q.push({root,0});
        map<int,int> m;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int line = it.second;
            m[line]=node->data;
            
            if(node->left!=nullptr) q.push({node->left,line-1});
            
            if(node->right!=nullptr) q.push({node->right,line+1});
            
        }
        
        for(auto it:m){
            ans.push_back(it.second);
        }
        
        return ans;
    }