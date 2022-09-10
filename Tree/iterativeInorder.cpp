#include <iostream>
#include <stack>
#include <bits/stdc++.h>
#include <queue>
using namespace std;


struct Node {
    int val;
    struct Node *left;
    struct Node *right;
    
    Node(int data){
        val=data;
    }
};

vector<int> striverinorder(struct Node * root){
    stack<struct Node *> s;
    struct Node * node = root;
    vector<int> ans;
    while(true){
        if(node!=NULL){
            s.push(node);
            node=node->left;
        }else{
            if(s.empty()) break;
            node = s.top();
            s.pop();
            ans.push_back(node->val);
            node = node->right;
        }
    }
    return ans;
}
vector<int> inorder(struct Node * root){
    vector<int> ans;
    if(root==NULL) return ans;
    stack<struct Node *> s;
    s.push(root);
    while(!s.empty()){
        root = s.top();
        if(root->left!=NULL) s.push(root->left);
        else{ 
            ans.push_back(root->val);
            s.pop();
            if(s.empty()) break;
            root = s.top();
            ans.push_back(root->val);
            s.pop();
            if(root->right!=NULL) s.push(root->right);
        }
        
    }
    return ans;
}


int main() {
	// your code goes here
	
	struct Node* root = new Node(1);
	struct Node * a=new Node(2),*b=new Node(3),*c=new Node(4),*d=new Node(5),*e=new Node(6),*f=new Node(7);
	
	root->left=a;
	root->right=b;
	
	a->left=c;
	a->right=d;
	
	b->left=e;
	b->right=f;
	
	vector<int> v = striverinorder(root);
	for(int i=0;i<v.size();i++){
	    cout<<v[i]<<" ";
	}
	return 0;
}
