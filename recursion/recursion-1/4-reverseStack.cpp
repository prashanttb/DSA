// reverse a stack

#include <iostream>
#include <stack>
using namespace std;

void in(stack<int> &s,int k){
    if(s.size()==0){
        s.push(k);
        return;
    }
    int t = s.top();
    s.pop();
    in(s,k);
    s.push(t);
    return;
}

void reverse(stack<int> &s){
    if(s.size()==1){
        return;
    }
    int temp = s.top();
    s.pop();
    reverse(s);
    in(s,temp);
    
    return;
}

int main() {
	// your code goes here
    stack<int> s;
    s.push(2);
    s.push(3);
    s.push(7);
    s.push(6);
    s.push(4);
    s.push(5);
    s.push(9);
    
    reverse(s);
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
        
	return 0;
}
