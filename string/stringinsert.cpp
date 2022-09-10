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
    
    //string ip;
    //cout<<"Enter a text:";
    //getline(cin,ip);
    

    //string ns = removal(ip);
    //cout<<ns;
    
    //substr
    //cout<<s.substr(2,5); 
	
	//searching a substrig 
	//string s1 = "abc abc abc abc";
	//int found = s1.find("abc"); //first occurence  //optional paamater: start search at what index
	//cout<<"First found at index : "<<found;
	
	//searching multiple instances
	//string s1 = "abc abc abc abc";
	//int found =-1;
	//do{
	//    found = s1.find("abc",found+1);
	//    if(found!=-1){
	//        cout<<"Found at index :"<<found<<endl;
	//    }
	//}while(found!=-1);
	
    //find_first_of same a find but search for the characters in the string individually
    //just checks whethra charchter from te string is present or not
    //found=s1.find_first_of("dce");
    //cout<<found;
    //op: 2
	
	//captilize using ascii
	//for(int i=0;i<s.length();i++){
	//     s.at(i)-=32;           //decrement the asscii value by 32 because 97(a)-65(A)=32
	//     
    //	}
	//cout<<s;
	
	//insert in middle
	//string s1 = "one two three four";
	//string s2 = "zero";
	//int found =s1.find(" ");
	//string s3 = s1.substr(0,found)+" "+s2+s1.substr(found);  //use do whlle technique for last space then concat
	//cout<<s3;

	//insert before last space
    	int lastspace=0;
    	int found = -1;
    	do{
            found = s1.find(" ",found+1);
            if(found!=-1){
            	lastspace=found;
            }
    	}while(found!=-1);
    
    	s2 = s1.substr(0,lastspace)+" "+s2+s1.substr(lastspace); 
    
    cout<<s2;	

	return 0;
	
}
