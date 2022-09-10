#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void solve_parameterized(int n, int sum=0){
    
    if(n==0){
        cout<<sum<<endl;
        return;
    }
    sum+=n;
    solve_parameterized(n-1, sum);
}

int solve(int n){
    if(n==1) return 1;
    return n+solve(n-1);
}

int main() {
	// your code goes here
	solve_parameterized(4);
	cout<<solve(3);
	return 0;
}
