#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// subsequence- contigious or non-contigious, follows the order
// subarray - contigious

/*

basic structure 

f(index, []){
    if(index>=n){
        print([]);
        retrun;
    }
    
    // considering value at index
    [].add(arr[indexx]);
    f(index+1,[]);

    // not considering value at index
    [].remove(arr[index]);
    f(index+1,[]);
}

*/

void printArray(vector<int> sub){
    for(auto i = sub.begin();i!=sub.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}

void solve(int index, vector<int> res, vector<int> arr){
    if(index>=arr.size()){
        printArray(res);
        return;
    }
    
    
    res.push_back(arr[index]);
    solve(index+1, res, arr);
    res.pop_back();
    solve(index+1, res, arr);
    
}



int main() {
	// your code goes here
    vector<int> arr{3,1,2,4};
    vector<int> res;
    solve(0,res,arr);;
	
	return 0;
}
