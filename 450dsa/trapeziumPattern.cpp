#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int r=n,l=n*(n+1);
	int k=1,s=l-(n/2)-1;
	for(int i=n;i>=1;i--){
	    
	    for(int j=0;j<n-i;j++){
	        cout<<"  ";
	    }
	    
	    for(int j=1;j<=i;j++){
	        cout<<k++<<" ";
	    }
	
	    for(int j=1;j<=i;j++){
	        cout<<s++<<" ";
	    }
	    l=l-i;
	    s=l-i+2;
	    
	    cout<<endl;
	}
	return 0;
}
