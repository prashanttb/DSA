// sort a stack

#include <iostream>
#include <stack>
using namespace std;



void insert(stack<int> &s,int val){
    if(s.empty() || s.top()<=val){
        s.push(val);
        return;
    }
    
    int temp = s.top();
    s.pop();
    insert(s,val);
    s.push(temp);
    return;
}

void Sort(stack<int> &s){
    if(s.empty()) return;
    
    int val = s.top();
    s.pop();
    Sort(s);
    insert(s,val);
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
    
    Sort(s);
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    
	return 0;
}
