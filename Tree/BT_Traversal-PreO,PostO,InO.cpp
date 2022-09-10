#include <iostream>

using namespace std;

struct node{
    int data;
    struct node *left;
    struct node *right;
};

struct node * createNode(int data){
    struct node* n = (struct node *)malloc(sizeof(struct node));
    n->data=data;
    n->left=NULL;
    n->right=NULL;
    return n;
}

void preorder(struct node * root){
    if(root!=NULL){
        cout<<root->data<<endl;
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node * root){
    if(root!=NULL){
        postorder(root->left);
        postorder(root->right);
        cout<<root->data<<endl;
    }
}

void inorder(struct node* root){
    if(root!=NULL){
        inorder(root->left);
        cout<<root->data<<endl;
        inorder(root->right);
    }
}

int main() {
	// your code goes here
    
    struct node* p = createNode(1);
    struct node* pl = createNode(2);
    struct node* pr = createNode(3);
    struct node* pll = createNode(4);
    struct node* plr = createNode(5);
    struct node* prl = createNode(6);
    struct node* prr = createNode(7);
    
    /*
    struct node* p = (struct node *)malloc(sizeof(struct node));
    struct node* pl = (struct node *)malloc(sizeof(struct node));
    struct node* pr = (struct node *)malloc(sizeof(struct node));
    struct node* pll = (struct node *)malloc(sizeof(struct node));
    struct node* plr = (struct node *)malloc(sizeof(struct node));
    struct node* prl = (struct node *)malloc(sizeof(struct node));
    struct node* prr = (struct node *)malloc(sizeof(struct node));
    */
    //p->data=1;
    p->left=pl;
    p->right=pr;
    
    //pl->data=2;
    pl->left=pll;
    pl->right=plr;
    
    //pr->data=3;
    pr->left=prl;
    pr->right=prr;
    
    //pll->data=4;
    pll->left=NULL;
    pll->right=NULL;
    
    //plr->data=5;
    plr->left=NULL;
    plr->right=NULL;
    
    //prl->data=6;
    prl->left=NULL;
    prl->right=NULL;
    
    //prr->data=7;
    prr->left=NULL;
    prr->right=NULL;
    
    //preorder(p);
    //postorder(p);
	inorder(p);
	
	return 0;
}
