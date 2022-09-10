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

// 2 stack approach
stack<int> postorder(struct Node * root){
    stack<int> ans;
    if(root==NULL) return ans;
    stack<struct Node *> s;
    s.push(root);
    while(!s.empty()){
        root = s.top();
        s.pop();
        ans.push(root->val);
        if(root->left!=NULL) s.push(root->left);
        if(root->right!=NULL) s.push(root->right);
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
	
	stack<int> v = postorder(root);
	for(;!v.empty();){
	    cout<<v.top()<<" ";
	    v.pop();
	}
	return 0;
}
