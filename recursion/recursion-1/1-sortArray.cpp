// sort an array

#include <iostream>
#include <vector>
using namespace std;


void insert(vector<int> &v, int temp){
    if(v.size()==0 || v[v.size()-1]<=temp){
        v.push_back(temp);
        return;
    }
    int val = v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
    return;
}

void Sort(vector<int> &a){
    if(a.size()==1) return;
    
    int temp = a[a.size()-1];
    a.pop_back();
    Sort(a);
    insert(a,temp);
    
}

int main() {
	// your code goes here
    vector<int> a={2,3,7,6,4,5,9};
    Sort(a);
    for(auto& i:a){
        cout<<i<<endl;
    }
	return 0;
}
