#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve_parameterized(int n, int mul=1){
    if(n==0 || n==1){
        
        cout<<mul<<endl;
        return;
    }
    mul=mul*n;
    solve_parameterized(n-1, mul);
}

int solve(int n){
    if(n==0 || n==1) return 1;
    return n*solve(n-1);
}

int main() {
	// your code goes here
	solve_parameterized(4);
	cout<<solve(3);
	return 0;
}
