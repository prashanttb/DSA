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
    
    //traversal
    for(struct Node *tmp=head;tmp!=NULL;tmp=tmp->next){
        cout<<tmp->data<<endl;
    }

	return 0;
}
























