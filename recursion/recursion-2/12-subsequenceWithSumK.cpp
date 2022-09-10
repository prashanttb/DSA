#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// subsequence- contigious or non-contigious, follows the order
// subarray - contigious

void printArray(vector<int> sub){
    for(auto i = sub.begin();i!=sub.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
}

void solve(int index, vector<int> res, vector<int> arr, int sum, int k){
    //cout<<sum<<" ";
    if(index==arr.size()){
        if(sum == k){
            printArray(res);            
        }
        return;
    }
    
    res.push_back(arr[index]);
    solve(index+1, res, arr,sum+arr[index], k);
    res.pop_back();
    solve(index+1, res, arr, sum, k);
    
}


bool solve_only_one(int index, vector<int> res, vector<int> arr, int sum, int k){
    //cout<<sum<<" ";
    if(index==arr.size()){
        if(sum == k){
            printArray(res);
            return true;            
        }
        else return false;
    }
    
    res.push_back(arr[index]);
    if(solve_only_one(index+1, res, arr,sum+arr[index], k)==true){
        return true;
    }
    res.pop_back();
    if(solve_only_one(index+1, res, arr, sum, k)==true){
        return true;
    }
    
    return false;
    
}


int solve_count(int index, vector<int> res, vector<int> arr, int sum, int k){
    
    /*
    
    int f(){
        base case
            return 1 if satisfied
            return 0 in not
        l=considering value at i
        r=not considering
        return l+r
    }
    
    */

    if(index==arr.size()){
        if(sum == k){
            //printArray(res);
            return 1;
        }
        return 0;
    }
    
    
    res.push_back(arr[index]);
    int l=solve_count(index+1, res, arr,sum+arr[index], k);
    res.pop_back();
    int r=solve_count(index+1, res, arr, sum, k);
    return l+r;
    
}


int main() {
	// your code goes here
    vector<int> arr{3,1,2,4};
    vector<int> res;
    // solve_only_one(0,res,arr,0,7);
    // solve(0,res,arr,0,7);
	cout<<solve_count(0,res,arr,0,2);
	
	return 0;
}
