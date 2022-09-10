#include <iostream>
using namespace std;



int main() {
	// your code goes here
	int arr[]={2,3,7,8,12};
	int sum=11,i,j,n=5;
	bool t[n+1][sum+1];
	
	//initialization
	for(i=0;i<n+1;i++){
	    for(j=0;j<sum+1;j++){
	        if(i==0) t[i][j]=false;
	        if(j==0) t[i][j]=true;
	    }
	}
	
	for(i=1;i<n+1;i++){
	    for(j=1;j<sum+1;j++){
	        if(arr[i-1]<=j){
	            t[i][j]=t[i-1][j-arr[i-1]] || t[i-1][j];
	        }else{
	            t[i][j]=t[i-1][j];
	        }
	    }
	}

	//for(i=0;i<n+1;i++){
	//    for(j=0;j<sum+1;j++){
    //        cout<<t[i][j]<<" ";
	//    }cout<<endl;
	//}
	
	cout<<t[n][sum];


	return 0;
}
