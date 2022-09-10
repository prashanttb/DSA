#include <iostream>
using namespace std;

	// struct method, simple linear search
	struct Pair{
	    int min;
	    int max;
	};

    //normal approach
	// struct method, simple linear search
	/*
	struct Pair getminmax(int a[], int n){
	    struct Pair minmax;
	    if (n == 1)
        {
            minmax.max = a[0];
            minmax.min = a[0];    
            return minmax;
        }
	    if(a[0]>a[1]){
	        minmax.min=a[1];
	        minmax.max=a[0];
	    }
	    else{
	        minmax.min=a[0];
	        minmax.max=a[1];
	    }
	    for(int i=2;i<n;i++){
	        if(a[i]>minmax.max){
	            minmax.max=a[i];
	        }
	        if(a[i]<minmax.min){
	            minmax.min=a[i];
	        }
	    }
	    
	    return minmax;
	}*/
	
	//tournament method
	//divide & conquer
	/*
	struct Pair getminmax(int a[], int low, int high){
	    int mid;
	    struct Pair minmax,mml,mmr;
	    
	    //arr of size 1
	    if(low==high){
	        minmax.min=a[low];
	        minmax.max=a[low];
	        return minmax;
	    }
	    
	    //arr of size 2
	    if(high==low+1){
	        if(a[low]>a[high]){
	            minmax.min=a[high];
	            minmax.max=a[low];
	        }else{
	            minmax.min=a[low];
	            minmax.max=a[high];
	        }
	        return minmax;
	    }
	    
	    //arr.size > 2
	    mid=(low+high)/2;
	    mml=getminmax(a,low,mid);
	    mmr=getminmax(a,mid+1,high);
	    
	    if(mml.min>mmr.min){
	        minmax.min=mmr.min;
	    }
	    else{
	        minmax.min=mml.min;
	    }
	    
	    
	    if(mml.max>mmr.max){
	        minmax.max=mml.max;
	    }
	    else{
	        minmax.max=mmr.max;
	    }
	    return minmax;
	}*/
	

	//comparison in pairs method
	/*
	struct Pair getminmax(int a[],int n){
	    struct Pair minmax;
	    if(n%2!=0){
	        minmax.min=a[0];
	        minmax.max=a[0];
	    }
	    else{
	        minmax.min=a[0];
	        minmax.max=a[1];
	    }
	    
	    for(int i=2;i<n-1;i+=2){
	        if(a[i]>a[i+1]){
	            if(a[i]>minmax.max){
	                minmax.max=a[i];
	            }
	            if(a[i+1]<minmax.min){
	                minmax.min=a[i+1];
	            }
	        }else{
	            if(a[i+1]>minmax.max){
	                minmax.max=a[i+1];
	            }
	            if(a[i]<minmax.min){
	                minmax.min=a[i];
	            }
	        }
	    }
	    return minmax;
	}*/
	
	
int main() {
	// your code goes here
	
	//normal approach
	// 1+2(n-2) worst case comparisons
	// n-1 best case
	/*
	int a[]={2,3,1,4,6,5};
	int min=a[0],max=a[0];
	for(int i=0;i<6;i++){
	    if(a[i]>max){
	        max=a[i];
	    }
	    if(a[i]<min){
	        min=a[i];
	    }
	cout<<max<<" "<<min;
	}*/
	
	// struct method, simple linear search
	/*
	int a[]={2,3,1,4,6,5};
	struct Pair minmax=getminmax(a,6);
	
	cout<<minmax.min<<" "<<minmax.max;
	*/
	
	
	//tournament method
	//divide & conquer
	//T(n)=2T(n/2)+2
	//T(1)=0, T(2)=1
	// => T(n)=3n/2-2 comparisons
	// the approach does 3n/2 -2 comparisons if n is a power of 2. 
	// And it does more than 3n/2 -2 comparisons if n is not a power of 2.
	/*
	int a[]={2,3,1,4,6,5};
	struct Pair minmax=getminmax(a,0,sizeof(a)/sizeof(int)-1);
	cout<<minmax.min<<" "<<minmax.max;
	*/
	
	//comparison in pairs method
	//n->odd => 3(n-1)/2 comparisons
	//n->even => 3n/2-2 comparisons, less in even
	/*
	int a[]={2,3,1,4,6,5};
	struct Pair minmax=getminmax(a,sizeof(a)/sizeof(int));
	cout<<minmax.min<<" "<<minmax.max;
	*/
	
	return 0;
	
}
