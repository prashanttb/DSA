// { Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
//User function template for C++

class Solution{
    public:
    // arr : given array
    // l : starting index of the array i.e 0
    // r : ending index of the array i.e size-1
    // k : find kth smallest element and return using this function
    
    void swap(int *a,int *b){
        int t=*a;
        *a=*b;
        *b=t;
    }
    
    //partition same as quicksort
    //pivot =last element
    //moves all the smaller elemet to the left of pivot
    //and larger to the right
    int partition(int arr[],int l, int r){
        int x = arr[r];
        int i=l;
        
        for(int j=l;j<=r-1;j++){
            if(arr[j]<x){
                swap(&arr[i],&arr[j]);
                i++;
            }
        }
        swap(&arr[i],&arr[r]);
        return i;
    }
    
    int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        
        //is k smaller than the no of arr elements
        if(k>0 && k<=r-l+1){
            //aprtition the array around the last 
            //element and get position of pivot
            //element in soted array
            int index = partition(arr,l,r);
            
            //if posistion is same as k
            if(index-l==k-1)
                return arr[index];
                
            //if position is more, recur
            //for left subaray
            if(index-l>k-1)
                return kthSmallest(arr,l,index-1,k);
            
            //else recur fo right subaray
            return kthSmallest(arr,index+1, r,k-index+l-1);
            
        }
        //if k is more than no of array elems
        return INT_MAX;
        
        
    }
};

// { Driver Code Starts.
 
int main()
{
    int test_case;
    cin>>test_case;
    while(test_case--)
    {
        int number_of_elements;
        cin>>number_of_elements;
        int a[number_of_elements];
        
        for(int i=0;i<number_of_elements;i++)
            cin>>a[i];
            
        int k;
        cin>>k;
        Solution ob;
        cout<<ob.kthSmallest(a, 0, number_of_elements-1, k)<<endl;
    }
    return 0;
}  // } Driver Code Ends