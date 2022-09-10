// reverse digits of a no 

#include <iostream>
using namespace std;

int reverse(int n){
    int rev=0;
    while(n!=0){
        rev=rev*10+(n%10);
        n=n/10;
    }
    return rev;
}

int reverseR(int n,int rev=0){
    if(n!=0){
        rev=rev*10+(n%10);
        reverseR(n/10,rev);
    }else{
        return rev;
    }
}

int main() {
	// your code goes here
    cout<<reverseR(123);
	return 0;
}
