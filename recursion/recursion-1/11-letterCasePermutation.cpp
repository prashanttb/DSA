#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void p(string i,string o){
    if(i.length()==0){
        cout<<o<<endl;
        return;
    }
    
    
    if(i[0]>=65 && i[0]<=122){
        string o1 =o;
        string o2 =o;
    
        o1.push_back(i[0]);
        if(isupper(i[0])){
            o2.push_back(tolower(i[0]));
        }else o2.push_back(toupper(i[0]));
        
        i.erase(i.begin()+0);
        
        p(i,o1);
        p(i,o2);
        return;
    }else{
        
        string o1=o;
        o1.push_back(i[0]);
        i.erase(i.begin()+0);
        p(i,o1);
        return;
    }
    


}


int main() {
	// your code goes here
	string i = "a1b2";
	
	p(i,"");
	return 0;
}
