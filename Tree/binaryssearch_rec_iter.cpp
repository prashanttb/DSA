#include <iostream>
using namespace std;


//iteative binary search
int binary_search(int a[], int l,int h,int k){
    int mid;
    while(l<=h){
        mid=(l+h)/2;
        if(k==a[mid]){
            return mid;
        }
        if(k<a[mid]){
            h=mid-1;
        }else l=mid+1;
    }
    return 0;
}

//reursive binary search
int r_binary_search(int a[], int l, int h, int k){
    int mid;

    if(l==h){
        if(a[l]==k){
            return l;
        }else{
            return 0;
        }
    }
    
    else{
        mid=(l+h)/2;
        if(k==a[mid]){
            return mid;
        }
        if(k<a[mid]){
            return r_binary_search(a,l,mid-1,k);
        }
        else return r_binary_search(a,mid+1,h,k);
    }
}

int main() {
	// your code goes here
	int a[]={1,2,3,34,45,66,90};
	cout<<r_binary_search(a,0,6,45);
	return 0;
}
