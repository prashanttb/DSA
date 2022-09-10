//head as a pointer
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
    //op: 7 6 5

    //insert at beginning
    struct Node *new_head = (struct Node *)malloc(sizeof(struct Node));
    new_head->data=0;
    new_head->next=head;
    head=new_head;
    //op: 0 7 6 5
    
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
    //op: 0 8 7 6 5 

    //insert after a node
    struct Node *ppp =(struct Node *)malloc(sizeof(struct Node));
    ppp->next=elem->next;
    elem->next=ppp;
    ppp->data=9;
    //op: 0 8 9 7 6 5

    //insert at the endl
    struct Node *end=(struct Node *)malloc(sizeof(struct Node));
    struct Node *s=head;
    while(s->next!=NULL){
        s=s->next;
    }
    s->next=end;
    end->next = NULL;
    end->data=10;
    //op: 0  8 9 7 6 5 10
    
    //deleting 1st node
    struct Node *del1 =head; 
    head=head->next;
    free(del1);
    //op: 8 9 7 6 5 10
    
    //deleting a node in between
    index=2;
    i=0;
    p=head;
    while(i!=index-1){
        p=p->next;
        i++;
    }
    struct Node *del2=p->next;
    p->next=del2->next;
    free(del2);
    //op: 8 9 6 5 10
    
    //delete the last Node
    p=head;
    struct Node *q=head->next;
    while(q->next!=NULL){
        p=p->next;
        q=q->next;
    }
    p->next=NULL;
    free(q);
    //op: 8 9 6 5 
    
    //delete from a value
    int value=6;
    p=head;
    while(p->next->data!=value){
        p=p->next;
    }
    q=p->next;
    p->next=q->next;
    free(q);
    
    //
    
    //traversal
    for(struct Node *tmp=head;tmp!=NULL;tmp=tmp->next){
        cout<<tmp->data<<endl;
    }

	return 0;
}