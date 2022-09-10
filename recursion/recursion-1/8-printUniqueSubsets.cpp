// tower of hanoi

#include <iostream>
#include <stack>
#include <math.h>
#include <string>
#include <set>
#include <iterator>
using namespace std;


void solve(string in, string op, set<string> &t){
    if(in.length()==0){
        t.insert(op);
        //cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(in[0]);
    in.erase(in.begin()+0);
    
    solve(in,op1,t);
    solve(in,op2,t);
    return;
    
}


int main() {
	// your code goes here
    string in = "aaa",op = "";
    set<string> t;
    solve(in,op,t);
    set<string>::iterator itr;
    for(itr=t.begin();itr!=t.end();itr++){
        cout<<*itr<<endl;
    }
    
    
	return 0;
}
