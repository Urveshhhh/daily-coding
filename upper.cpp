#include<iostream>
using namespace std;
 int main(){
    char a;
    cout<<"enter value of a to check whether it is in uppercase/lowercase/num";
    cin>>a;
    
    if(a >= 'A' && a <= 'Z'){
    	cout<<"enter character is in uppercase :)";
	}
	else if(a >= 'a' && a <= 'z'){
		cout<<"entered character is in lowercase:)";
	}
	else{
		cout<<"enterd number is number";
	}
	return 0;
 }
