// using level order traversal
    vector<int> topView(Node *root)
    {
        //Your code here
        vector<int> ans;
        if(root==nullptr) return ans;
        queue<pair<Node*, int>> q;
        q.push({root,0});
        map<int, int> m;
        while(!q.empty()){
            auto it = q.front();
            q.pop();
            Node* node = it.first;
            int line = it.second;
	    /* if that line doesnt exist->initialize that node opn the map
            because that the 1st time you are visiting that line */
            if(m.find(line)==m.end()) m[line]=node->data;
            
            if(node->left!=nullptr){
                q.push({node->left,line-1});
            }
            
            if(node->right!=nullptr){
                q.push({node->right,line+1});
            }
            

        }
        for(auto it:m){
            ans.push_back(it.second);
        }
        
        return ans;
    }