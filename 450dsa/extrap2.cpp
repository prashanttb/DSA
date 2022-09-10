/*
Given n numbers, you can remember k 
distinct integers. For every extra integer you 
can't remember, you have to pay a value x, 
find the total amount you have to pay 
*/

#include <iostream>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int main() {
	int n,k,x,a;
	set<int> s1;
	cin>>n;
	cin>>k;
	cin>>x;
	
	for(int i=0;i<n;i++){
	    cin>>a;
	    s1.insert(a);
	}
    const int p= s1.size();
    if(p-k>0)
    cout<<(p-k)*x;
    else cout<<0;
	return 0;
}