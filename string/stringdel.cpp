#include <iostream>
#include <string>
using namespace std;


    string removal(string sp){
        string ns;
        for(int i=0;i<sp.length();i++){
            if(sp.at(i)!='a'){
                ns += sp.at(i);
            }
        }
        return ns;
    }
    

int main() {
    string s = "hello world"; 

    //length
    //cout<<s.length();

    //resize string
    //s.resize(5);  //reducing size
    //cout<<s;
    
    //s.resize(20, '!');   //increase size
    //cout<<s;
    //op: hello world!!!!!!!!!
    
    //rough
    // s.resize(s.length()+3,'!');
    //cout<<s;
    
    //at method
    //cout<<s.at(3);

    //s.at(3)='p';
    //cout<<s;

    //concatenation
    //string s2 = "ha ha ha";
    //char e = '!';
    //s2 = s+" "+s2+e;
    //cout<<s2;
    
    
    //taking input as a string in loop
    //string a[5], input;
    //int i=0;
    //do{
    //    cout<<"Enter some text :";
    //    getline(cin,input);
    //    a[i]=input;
    //    i++;    
    //}while(input!="!");
    
    //for(int j=0;j<i;j++){
    //    cout<<a[i]<<endl;
    // }
    
    string ip;
    cout<<"Enter a text:";
    getline(cin,ip);
    

    string ns = removal(ip);
    cout<<ns;
    
	return 0;
	
}
