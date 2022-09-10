#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// every possible combination giving sum = k, repeatition not allowed, in sorted order

void solve(int index, vector<int> arr, vector<int> res, vector<vector<int>> &ans, int target){

    if(target==0){
        ans.push_back(res);
        return;
    }
    
    for(int i=index; i<arr.size();i++){
        if(i>index && arr[i]==arr[i-1]) continue;
        if(arr[i]>target) break;
        res.push_back(arr[i]);
        solve(i+1,arr, res, ans, target-arr[i]);
        res.pop_back();
    }
}

int main() {
	// your code goes here
	//vector<int> arr{1,1,1,2,2};
	vector<int> arr{1,3,3,7};
    vector<int> res;
    vector<vector<int>> ans;
    sort(arr.begin(), arr.end());
    solve(0, arr, res, ans, 7);
    
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
	return 0;
}
