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

void insertion_sort_iterative(int arr[], int n){
    int key;
    /*
    for(int i=1;i<n;i++){
        key=arr[i];
        for(int j=i-1;j>=0 && key<arr[j];j--){
            swap(arr[i],arr[j]);
            key = arr[i-1];
            for(int k=0;k<5;k++){
        	    cout<<arr[k]<<" ";
        	}cout<<endl;
        }
    }*/
    for (int i = 1; i < n; i++)
    { 
        key = arr[i]; 
        int j = i - 1; 
  
        while (j >= 0 && arr[j] > key)
        { 
            arr[j + 1] = arr[j]; 
            j = j - 1; 
        } 
        arr[j + 1] = key; 
    } 
    return;
}

void insertion_sort_recursive(int arr[], int n){
    if(n==0 || n==1) return;
    int key = arr[5 - n + 1]; 
    int j = 5 - n; 

    while (j >= 0 && arr[j] > key)
    { 
        arr[j + 1] = arr[j]; 
        j = j - 1; 
    } 
    arr[j + 1] = key; 
    insertion_sort_recursive(arr,n-1);
}

int main() {
	// your code goes here
	int arr[]={5,2,7,8,1};
	// int arr[]={1,2,3,4,5};
	// insertion_sort_iterative(arr,5);
	insertion_sort_recursive(arr,5);
	for(int i=0;i<5;i++){
	    cout<<arr[i]<<" ";
	}
	return 0;
}
