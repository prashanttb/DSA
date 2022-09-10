// Delete middle element of stack

#include <iostream>
#include <stack>
using namespace std;

//for even size, middle = below middle line
void Delete(stack<int> &s,int k){
    if(s.size()==k){
        s.pop();
        return;
    }
    int val = s.top();
    s.pop();
    Delete(s,k);
    s.push(val);
    return;
}

// for even size, middle = above middle line 
void Deleteav(stack<int> &s,int k){
    if(k==1){
        s.pop();
        return;
    }
    int val = s.top();
    s.pop();
    Deleteav(s,k-1);
    s.push(val);
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

    
    int k=(s.size()/2)+1;
    
    Delete(s,k);
    
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
        
	return 0;
}
