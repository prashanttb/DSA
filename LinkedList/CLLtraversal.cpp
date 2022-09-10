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
    Node *fourth =(struct Node *)malloc(sizeof(struct Node));
    head->data=7;
    head->next=second;
    second->data=6;
    second->next=third;
    third->data=5;
    third->next=fourth;
    fourth->data=4;
    fourth->next=head;
    
    //traversal
    //for(struct Node *tmp=head;tmp!=NULL;tmp=tmp->next){
    //    cout<<tmp->data<<endl;
    //}
    struct Node *tmp=head;
    do{
        cout<<tmp->data;
        tmp=tmp->next<<endl;
    }while(tmp!=head);

	return 0;
}
