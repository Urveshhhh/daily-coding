#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter number to check whether it is prime or not";
    cin>>n;
    
    int i = 2;
    	if (n % i == 0){
    		cout<<"given num is not prime  "<<endl;
		}
		else{
			cout<<"given num  is  prime "<<endl;
		}
	return 0;
 }
