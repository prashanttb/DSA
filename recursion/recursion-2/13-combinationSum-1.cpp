#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// every possible combination giving sum = k, repeatition of elements is allowed

void solve(int index, vector<int> arr, vector<int> res, vector<vector<int>> &ans, int target){
    if(index == arr.size()){
        if(target==0){
            ans.push_back(res);
        }
        return;
    }
    
    if(arr[index]<=target){
        res.push_back(arr[index]);
        solve(index, arr, res, ans, target-arr[index]);
        res.pop_back();
    }
    solve(index+1, arr, res, ans, target);
}

int main() {
	// your code goes here
	vector<int> arr{2,3,1,7};
    vector<int> res;
    vector<vector<int>> ans;
    
    solve(0, arr, res, ans, 7);
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
	return 0;
}
