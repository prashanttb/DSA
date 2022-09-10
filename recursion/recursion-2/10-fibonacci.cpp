#include <iostream>
using namespace std;

// multiple recursion

int solve(int n){
    if(n<=1) return n;
    return solve(n-1)+solve(n-2);
}

int main() {
	// your code goes here
	
	cout<<solve(8);
	
	return 0;
}
