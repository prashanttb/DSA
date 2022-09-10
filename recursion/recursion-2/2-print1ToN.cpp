#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0){
        return;
    }
    cout<<n<<endl;
    n--;
    print(n);
}

int main() {
	// your code goes here
	print(6);
	return 0;
}
