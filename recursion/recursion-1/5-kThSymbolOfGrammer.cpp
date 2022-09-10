// kth symbol of grammer
// av rec 10th d

#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

int solve(int n,int k){
    if(n==1 && k==1){
        return 0;
    }
    int mid = pow(2,n-1)/2;
    if(k<=mid){
        return solve(n-1,k);
    }
    else{
        return !solve(n-1,k-mid);
    }
}


int main() {
	// your code goes here
    cout<<solve(4,8);
    
	return 0;
}
