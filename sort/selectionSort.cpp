#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int t = *a;
    *a=*b;
    *b=t;
}

// Time complexity: O(N^2)
// Space complexity: O(1)
// Max no of swaps: not more than O(N)
// not stable by default
// inplace

void selection_sort_iterative(int arr[], int n){
    int min_idx;
    for(int i=0;i<n-1;i++){
        min_idx = i;
        for(int j=i+1;j<n;j++){
            // cout<<arr[j]<<"<"<<arr[min_idx]<<":"<<(arr[j]<arr[min_idx])<<" ";
            if(arr[j]<arr[min_idx]){
                min_idx=j;
            }
        }
        if(min_idx!=i) swap(&arr[min_idx],&arr[i]);
    }
}

void selection_sort_recursive(int arr[], int n){
    if(n==0 || n==1) return;
    int min_idx=5-n;
    for(int j=5-n+1;j<5;j++){
        if(arr[j]<arr[min_idx]){
            min_idx=j;
        }
    }
    if(min_idx!=5-n) swap(&arr[min_idx],&arr[5-n]);
    selection_sort_recursive(arr,n-1);
}

int main() {
	// your code goes here
	int arr[]={5,2,7,8,1};
	selection_sort_recursive(arr,5);
	// bubble_sort_recursive(arr,5);
	for(int i=0;i<5;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
