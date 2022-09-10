#include <iostream>
#include <vector>
using namespace std;

	// swap method 1, start = 0, end = n-1, swap(arr[start],a[end]), start+=1, end-=1
    void swap(int *a, int *b){
	    int t;
	    t=*a;
	    *a=*b;
	    *b=t;
	}
	
	//recursive approach
	void reverseArray(int a[], int start, int end){
	    if(start>end)
	    return;
	    
	    int t;
	    t=a[start];
	    a[start]=a[end];
	    a[end]=t;
	    reverseArray(a,start+1,end-1);
	}

int main() {
	// your code goes here
	
	// printing and removing last element

	//my approach
	/*
	vector<int> a;
	int ip,i;
	for(i=0;i<6;i++){
	    cin>>ip;
	    a.push_back(ip);
	}
	
	for(i=0;i<6;i++){
	    cout<<a.back()<<" ";
	    a.pop_back();
	}*/
	
	// swap method 1, start = 0, end = n-1, swap(arr[start],a[end]), start+=1, end-=1
	/*
	int a[]={1,2,3,4,5,6}, stat=0;
	int end = sizeof(a)/sizeof(int)-1,start=0;
	
    while(end>start){
        swap(&a[start],&a[end]);
        start = start+1;
        end=end-1;
    }
    for(int i=0;i<6;i++){
        cout<<a[i]<<" ";
    }*/
    
    //recursive approach
    /*
    int a[]={1,2,3,4,5,6};
    
    reverseArray(a,0,5);
    
    for(int i=0;i<6;i++){
        cout<<a[i]<<" "; 
    }*/

    //python
    /*    
    def reverseList(A):
    print( A[::-1])
     
    # Driver function to test above function
    A = [1, 2, 3, 4, 5, 6]
    print(A)
    print("Reversed list is")
    reverseList(A) 
    */
    
	return 0;
	
}
