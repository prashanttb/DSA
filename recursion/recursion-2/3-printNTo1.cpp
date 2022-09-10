#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n,int s=1){
    if(n==0){
        return;
    }
    n--;
    cout<<s<<endl;
    s++;
    print(n,s++);
}

int main() {
	// your code goes here
	print(6);
	return 0;
}
