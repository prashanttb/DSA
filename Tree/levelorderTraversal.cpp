#include <iostream>
#include <bits/stdc++.h>
#include <queue>
using namespace std;

struct Node{
    int data;
    struct Node* left;
    struct Node * right;
    
    Node(int val){
        data = val;
        left=right=NULL;
    }
};

void preorder(struct Node* node){
    if(node==NULL){
        return;
    }
    cout<<node->data<<" ";
    preorder(node->left);
    preorder(node->right);
}

void postorder(struct Node* node){
    if(node==NULL) return;
    postorder(node->left);
    postorder(node->right);
    cout<<node->data<<" ";
}

void inorder(struct Node * node){
    if(node==NULL) return;
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}


vector<vector<int>> levelOrder(struct Node* root){
    vector<vector<int>> ans;
    if(root==NULL) return ans;
    queue<struct Node*> q;
    q.push(root);
    while(!q.empty()){
        int size = q.size();
        vector<int> level;
        for(int i=0;i<size;i++){
            struct Node* node = q.front();
            q.pop();
            if(node->left!=NULL) q.push(node->left);
            if(node->right!=NULL) q.push(node->right);
            level.push_back(node->data);
        }
        ans.push_back(level);
    }
    return ans;
}

int main() {
	// your code goes here
	struct Node* root = new Node(1);
	
	root->left=new Node(2);
	root->right=new Node(3);
	
	root->left->right=new Node(5);
	
	preorder(root);
	cout<<endl;
	postorder(root);
	cout<<endl;
	inorder(root);
	cout<<endl;
	vector<vector<int>> ans=levelOrder(root);
	
	for(int i=0;i<ans.size();i++){
	    for(int j=0;j<ans[i].size();j++)
	    cout<<ans[i][j]<<" ";
	    cout<<endl;
	}
	
	return 0;
}
