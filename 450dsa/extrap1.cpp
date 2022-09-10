/*
Given an array find max value of a[i]
+(a[j]*a[k]) such that i<j<k and a[i]<a[j]<a[k]
are satisfied
*/


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int i,j,k,n;
	cin>>n;
	int a[n],b[n],l=0;
	
	for(i=0;i<n;i++){
	    cin>>a[i];
	}
	
	for(i=0;i<n-2;i++){
	    for(j=i+1;j<n-1;j++){
	        for(k=j+1;k<n;k++){
	            if(a[i]<a[j] && a[j]<a[k]){
	                //cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
	                b[l]=a[i]+(a[j]*a[k]);
	                //cout<<b[l]<<endl;
	                l++;
	            }
	        }
	    }
	}
	// cout<<l;
	cout<<*max_element(b,b+l);
	
	return 0;
}
