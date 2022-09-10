#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    print(n-1);
    cout<<n<<endl;
}

int main() {
	// your code goes here
	print(6);
	return 0;
}
