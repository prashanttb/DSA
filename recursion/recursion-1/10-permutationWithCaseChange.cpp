#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void p(string i,string o){
    if(i.length()==0){
        cout<<o<<endl;
        return;
    }
    
    string o1 = o;
    o1.push_back(toupper(i[0]));
    string o2 = o;
    o2.push_back(i[0]);
    
    i.erase(i.begin()+0);
    
    p(i,o1);
    p(i,o2);
    return;
}


int main() {
	// your code goes here
	string i = "ab";
	
	p(i,"");
	return 0;
}
