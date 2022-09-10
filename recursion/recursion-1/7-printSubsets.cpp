// tower of hanoi

#include <iostream>
#include <stack>
#include <math.h>
#include <string>
using namespace std;


void solve(string in, string op){
    if(in.length()==0){
        cout<<op<<endl;
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(in[0]);
    in.erase(in.begin()+0);
    
    solve(in,op1);
    solve(in,op2);
    return;
    
}


int main() {
	// your code goes here
    string in = "abc",op = "";
    solve(in,op);
	return 0;
}
