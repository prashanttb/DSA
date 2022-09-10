//print n to 1 and 1 to n

#include <iostream>
using namespace std;

    int otn(int i,int n){
        if(i!=n+1){
            cout<<i<<endl;
            otn(i+1,n);
            
        }else return 0;
    }
 
    int nto(int n){
        if(n!=0){
            cout<<n<<endl;
            nto(n-1);
        }else return 0;
    }
    
    void otnav(int n){
        if(n==1) {
            cout<<1<<endl;
            return;
        }
        otnav(n-1);
        cout<<n<<endl;
    }
    
    void ntoav(int n){
        if(n==1){
            cout<<n<<endl;
            return;
        }
        cout<<n<<endl;
        ntoav(n-1);
    }
    
int main() {
	// your code goes here
	otn(1,5);
	cout<<endl;
	nto(5);
	cout<<endl;
	otnav(5);
	cout<<endl;
	ntoav(5);
	return 0;
}
