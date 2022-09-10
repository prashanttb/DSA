#include <iostream>
#include <string>
using namespace std;

int main(){
     
    string s1 = "one two three";
    string s2 = "zero";
    
    //insert at first
    //s2 = s2+" "+s1;
    
    //insert after the first space
    //int found= s1.find(" ");
    //s2 = s1.substr(0,found)+" "+s2+s1.substr(found);
    
    //insert before last space
    //int lastspace=0;
    //int found = -1;
    //do{
    //    found = s1.find(" ",found+1);
    //    if(found!=-1){
    //        lastspace=found;
    //    }
    //}while(found!=-1);
    //s2 = s1.substr(0,lastspace)+" "+s2+s1.substr(lastspace); 
    //cout<<s2;
    
    //removing substrs
    string txt = "these um are my um words, um and um I want um to stop um talking um like this";
    //int found=-1;
    //string target = "um ";
    //string r="";
    //do{
    //    found=txt.find("um ",found+1);
    //    if(found!=-1){
    //        txt=txt.substr(0,found)+txt.substr(found+target.length());
    //    }
    //}while(found!=-1);
    //cout<<txt;
    
    //replacing substr
    int found = -1;
    string target="um";
    string r = "like";
    do{
        found = txt.find("um",found+1);
        if(found!=-1){
            txt=txt.substr(0,found)+r+txt.substr(found+target.length());
        }
    }while(found!=-1);
    cout<<txt;
    return 0;    
}