#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int t = *a;
    *a=*b;
    *b=t;
}

// Time complexity: O(N^2)
// Space complexity: O(1)
// Max no of swaps: n(n-1)/2
// stable by nature
// inplace

void bubble_sort_iterative(int arr[], int n){
    bool swapped = false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(&arr[j],&arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;
    }
    return;
}

void bubble_sort_recursive(int arr[], int n){
    if(n==0||n==1){
        return;
    }
    for(int j=0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(&arr[j],&arr[j+1]);
        }
    }
    bubble_sort_recursive(arr,n-1);
}

int main() {
	// your code goes here
	int arr[]={5,2,7,3,1};
	// bubble_sort_iterative(arr,5);
	bubble_sort_recursive(arr,5);
	for(int i=0;i<5;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
