#include<iostream>
using namespace std;
 int main(){
    int a;
    cout<<"enter value of a to check whether it is positive/negative/0";
    cin>>a;
    
    if(a > 0){
    	cout<<"enter number is positive :)";
	}
	else if(a == 0){
		cout<<"entered number is 0 :)";
	}
	else{
		cout<<"enterd number is negative";
	}
	return 0;
 }
