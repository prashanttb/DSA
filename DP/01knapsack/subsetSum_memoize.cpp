#include <iostream>
#include <cstring>
using namespace std;

static bool t[102][1002];

bool subsetSum(int arr[],int sum, int n){
    if(n==0 && sum!=0) return t[n][sum]=false;
    if(sum == 0) return t[n][sum]=true;
    if(t[n][sum]!=false) return t[n][sum]; 
    if(arr[n-1]<=sum){
        return t[n][sum]=subsetSum(arr,sum-arr[n-1],n-1) || subsetSum(arr,sum,n-1);
    }else{
        return t[n][sum]=subsetSum(arr,sum,n-1);
    }
}

int main() {
	// your code goes here
	int arr[]={2,1,7,8,12};
	int sum=11,i,j,n=5;
    memset(t,false,sizeof(t));
/*	bool t[n+1][sum+1];
	
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
*/
    cout<<subsetSum(arr,sum,5);

	return 0;
}
