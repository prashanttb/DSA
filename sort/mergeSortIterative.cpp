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

void merge(int arr[], int l, int r, int mid){
    
    int i1=mid-l+1, i2=r-mid;
    int arr1[i1];
    int arr2[i2];
    
    for (auto i = 0; i < i1; i++)
        arr1[i] = arr[l + i];
    for (auto j = 0; j < i2; j++)
        arr2[j] = arr[mid + 1 + j];
        
    int i=0,j=0,k=l;
    while(i<i1 && j<i2){
	    if(arr1[i]<=arr2[j]){
	        arr[k]=arr1[i];
	        i++;
	        
	    }else{
	        arr[k]=arr2[j];
	        j++;
	    }
	    k++;
	}
	if(j<i2){
	    for(;j<i2;j++){
	        arr[k]=arr2[j];
	        k++;
	    }
	}
	
	if(i<i1){
	    for(;i<i1;i++){
	        arr[k]=arr1[i];
	        k++;
	    }
	}
	delete[] arr1;
    delete[] arr2;
}

void merge_sort(int arr[], int l, int r){
    
    if(l>=r) return;
    int mid = l+(r-l)/2;
    
    merge_sort(arr, l, mid);
    merge_sort(arr,mid+1,r);
    merge(arr, l,r,mid);
    
}

void print(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main() {
	// your code goes here
	//int arr1[]={1,2,3,4,6};
	//int arr2[]={1,2,3,5,7};
	int arr[]={12, 11, 13, 5, 6, 7};
	// insertion_sort_iterative(arr,5);
	/*
	int arr[12];
	int j=0,i=0;
	int k=0;
	while(i<5 && j<5){
	    if(arr1[i]<=arr2[j]){
	        arr[k]=arr1[i];
	        i++;
	        k++;
	        
	    }else{
	        arr[k]=arr2[j];
	        k++;
	        j++;
	    }
	}
	if(j<5){
	    for(;j<5;j++){
	        arr[k]=arr2[j];
	        k++;
	    }
	}
	
	if(i<5){
	    for(;i<5;i++){
	        arr[k]=arr1[i];
	        k++;
	    }
	}
	
	insertion_sort_recursive(arr,5);
	
	for(int i=0;i<k;i++){
	    cout<<arr[i]<<" ";
	}*/
	merge_sort(arr,0,5);
	print(arr,6);
	return 0;
}
