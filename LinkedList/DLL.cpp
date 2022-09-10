#include <iostream>
using namespace std;
	
	struct Node{
	    int data;
	    struct Node *prev;
	    struct Node *next;
	};
	
int main() {
	// your code goes here
    
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *sec = (struct Node *)malloc(sizeof(struct Node));
    struct Node *third = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourth = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fifth = (struct Node *)malloc(sizeof(struct Node));
    
    head->data=1;
    head->prev=NULL;
    head->next=sec;
    
    sec->data=3;
    sec->prev=head;
    sec->next=third;
    
    third->data=6;
    third->prev=sec;
    third->next=fourth;
    
    fourth->data=7;
    fourth->prev=third;
    fourth->next=fifth;
    
    fifth->data=9;
    fifth->prev=fourth;
    fifth->next=NULL;
    
    struct Node *tmp=head;
    while(tmp->next!=NULL){
        cout<<tmp->data<<endl;
        tmp=tmp->next;
    }
    cout<<tmp->data<<endl;
    
    
    while(tmp->prev!=NULL){
        cout<<tmp->data<<endl;
        tmp=tmp->prev;
    }
    cout<<tmp->data;
    
	return 0;
	
}
