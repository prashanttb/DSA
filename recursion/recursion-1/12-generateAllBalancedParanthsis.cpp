#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void p(int o, int c,string op, vector<string> &v){
    if(o==0 && c==0){
        v.push_back(op);
        cout<<op<<endl;
        return;
    }
    if(o!=0 && c==o){
        
        string op1 = op;
        op1.push_back('(');
        p(o-1,c,op1,v);
        return;
    
    }
    if(c>o){
        
        if(o!=0){
            string op1=op;
            op1.push_back('(');
            p(o-1,c,op1,v);
        }
        
        string op2=op;
        op2.push_back(')');
        
        p(o,c-1,op2,v);
        return;
    }
    return;
}

int main() {
	// your code goes here
	int n=3;
	int o = n, c = n;
	vector<string> v;
	p(o,c,"",v);
	
	for(int i=0;i<v.size();i++){
	 //   cout<<v[i]<<endl;
	}
	return 0;
}
