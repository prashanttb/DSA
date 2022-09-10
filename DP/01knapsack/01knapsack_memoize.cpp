#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

static int t[102][1002];

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

int main() {
	// your code goes here
	memset(t,-1,sizeof(t));
	int wt[]={1,2,4,6};
	int val[]={2,4,3,5};
	int w=7;
	cout<<knapsack(wt,val,w,4);
	return 0;
}
