#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

static int t[102][1002];
/*
int knapsack(int wt[], int val[], int w, int n){
    if(n==0 || w==0){
        return 0;
    }
    //m
    if(t[w][n]!=-1){
        return t[w][n];
    }
    
    if(wt[n-1]<=w){
        return t[n][w]=max(val[n-1]+knapsack(wt,val,w-wt[n-1],n-1),knapsack(wt,val,w,n-1));
    }
    else if(wt[n-1]>w){
        return t[n][w]=knapsack(wt,val,w,n-1);
    }
}
*/

int main() {
	// your code goes here
	//memset(t,-1,sizeof(t));
	int wt[]={1,2,4,6};
	int val[]={2,4,3,5};
	int w=7,i,j,n=4;
	
	for(i=0;i<n+1;i++){
	    for(j=0;j<w+1;j++){
	        if(i==0 || j==0) t[i][j]=0;
	    }
	}
	
	for(i=1;i<n+1;i++){
	    for(j=1;j<w+1;j++){
	        if(wt[i-1]<=j){
	            t[i][j]=max(val[i-1]+t[i-1][j-wt[i-1]],t[i-1][j]);
	        }else t[i][j]=t[i-1][j];
	    }
	}
	cout<<t[n][w];
//	cout<<knapsack(wt,val,w,4);
	return 0;
}
