#include <iostream>
#include <string>
using namespace std;

int main(){
     
    string s1 = "abc";
    string s2 = "xyz";
    
    //str comparision 
    //outer > inner: +
    //viceversa : -
    //equal: 0
    //cout<<s2.compare(s1);
    
    //s1.clear();

    //check fo empty
    //0 for not empty
    //+ ve for empty
    cout<<s1.empty();
    return 0;    
}