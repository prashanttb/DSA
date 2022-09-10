#include <iostream>
using namespace std;
	
	struct stack{
	    int size;
	    int top;
	    int *arr;
	}; 
	
    int isEmpty(struct stack *s){
	    if(s->top==-1){
	        return 1;
	    }
	    else return 0;
	}
	
	int isFull(struct stack *ptr){
	    if(ptr->top==ptr->size-1){
	        return 1;
	    }
	    else return 0;
	}
	
    void push(struct stack *ptr, int a){
        if(!isFull(ptr)){
            ptr->top++;
            ptr->arr[ptr->top]=a;
        }
    }
    
    int pop(struct stack *s){
        if(!isEmpty(s)){
            //cout<<"Stack is empty";
            int val = s->arr[s->top];
            s->top--;
            return val;
            
        }else{
            //s->arr[s->top]=a;
            
        }
    }
    
	
int main() {
	// your code goes here
    struct stack *s;
    s->size=10;
    s->top=-1;
    s->arr=(int *)malloc(s->size * sizeof(int));
    
    //cout<<isFull(s);
    //cout<<isEmpty(s);
    push(s,12);
    //push(s,12);
    //push(s,12);
    //push(s,12);
    push(s,12);
    push(s,12);
    cout<<pop(s)<<endl;
    cout<<s->top;
    
	return 0;
	
}

