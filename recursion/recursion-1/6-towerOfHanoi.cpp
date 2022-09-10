// tower of hanoi d

#include <iostream>
#include <stack>
#include <math.h>
using namespace std;

void solve(int s, int d, int h, int n){
    if(n==1){
        cout<<"move plate "<<n<<" from "<<s<<" to "<<d<<endl;
        return;
    }
    solve(s,h,d,n-1);
    cout<<"move plate "<<n<<" from "<<s<<" to "<<d<<endl;
    solve(h,d,s,n-1);
    return;
}

int main() {
	// your code goes here
    int s=1,h=2,d=3,n=3;
    
    solve(s,d,h,n);
        
	return 0;
}
