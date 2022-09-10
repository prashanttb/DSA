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

//vector<int> striverpostorder(struct Node * root){
    //same approach with an extra stack and a vector   
//}

int maxdepth(struct Node* root){
    if(root==NULL) return 0;
    int lh = maxdepth(root->left);
    int rh = maxdepth(root->right);
    return 1+max(lh,rh);
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
	    
	//f->left = new Node(7);
	
	cout<<maxdepth(root);

	return 0;
}
