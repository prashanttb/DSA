// sum of digits of a no 

#include <iostream>
using namespace std;

int sod(int n){
    int sum=0;
    while(n>0){
        sum+=n%10;
        n=n/10;
    }
    return sum;
}

int sodr(int n,int sum=0){
    if(n!=0){
        sum+=n%10;
        sod(n/10,sum);
    }else{
        return sum;
    }
}

int main() {
	// your code goes here
    cout<<sodr(123);
	return 0;
}
