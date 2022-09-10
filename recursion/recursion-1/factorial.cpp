// factorial of n

#include <iostream>
using namespace std;
    
int fact(int n){
    if(n==1 || n==0){
        return 1;
    }
    return n*fact(n-1);
}    

int main() {
	// your code goes here
    cout<<fact(5);
	return 0;
}
