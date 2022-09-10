#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

void solve(int arr[], int l, int r){
    if(l>=r){
        return;
    }
    swap(&arr[l],&arr[r]);
    solve(arr,l+1,r-1);
}

void solve_1_pointer(int arr[], int n){
    if(n<0){
        return;
    }
    int t=arr[4-n];
    solve_1_pointer(arr, n-1);
    arr[n]=t;
}

int main() {
	// your code goes here
	int arr[]={1,2,3,4,5};
	// solve(arr,0,4);
	solve_1_pointer(arr,4);
	for(int i=0;i<5;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
