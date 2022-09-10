#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(string s, int i=5){
    if(i==0){
        return;
    }
    i--;
    cout<<s<<endl;
    print(s,i);
}

int main() {
	// your code goes here
	print("ptb");
	return 0;
}
