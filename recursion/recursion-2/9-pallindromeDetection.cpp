#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool solve(string s, int l, int r){
    cout<<s[l]<<" "<<s[r]<<endl;
    if(s[l]!=s[r]){
        return false;
    }
    if(l>=r){
        return true;
    }
    return solve(s,l+1,r-1);
}



int main() {
	// your code goes here
	string s = "sortors";
	
	cout<<solve(s,0,6);
	
	return 0;
}
