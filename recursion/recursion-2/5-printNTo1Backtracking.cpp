#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n, int i=1){
    if(n==0){
        return;
    }
    print(n-1,i+1);
    cout<<i<<endl;
}

int main() {
	// your code goes here
	print(6);
	return 0;
}
