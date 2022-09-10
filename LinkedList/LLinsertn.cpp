#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};


int main() {
	// your code goes here
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    Node *second =(struct Node *)malloc(sizeof(struct Node));
    Node *third =(struct Node *)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=6;
    second->next=third;
    third->data=5;
    third->next=NULL;
    

    //insert at beginning
    struct Node *new_head = (struct Node *)malloc(sizeof(struct Node));
    new_head->data=0;
    new_head->next=head;
    head=new_head;
    
    //insert at an index
    struct Node *elem = (struct Node *)malloc(sizeof(struct Node));
    int index = 1;
    struct Node *p=head;
    int i=0;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    elem->data=8;
    elem->next=p->next;
    p->next=elem;

    //insert after a node
    struct Node *ppp =(struct Node *)malloc(sizeof(struct Node));
    ppp->next=elem->next;
    elem->next=ppp;
    ppp->data=9;

    //insert at the endl
    struct Node *end=(struct Node *)malloc(sizeof(struct Node));
    struct Node *s=head;
    while(s->next!=NULL){
        s=s->next;
    }
    s->next=end;
    end->next = NULL;
    end->data=10;

    //traversal
    for(struct Node *tmp=head;tmp!=NULL;tmp=tmp->next){
        cout<<tmp->data<<endl;
    }

	return 0;
}
