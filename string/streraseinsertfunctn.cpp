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
    //    cout<<s1.empty();
    
    //erase functn
    //str1.erase(index to start, no of chars)
    string str1 = "helloeeeeworld";
    str1.erase(5,4);
    //cout<<str1;
    
    //insert functn
    //st1.insert(positn,str);
    str1.insert(5," ");
    cout<<str1;
    
    return 0;    
}