#include<iostream>
using namespace std;
 int main(){
    int n;
    cout<<"enter number to check whether it is prime or not";
    cin>>n;
    
    int i = 2;
    while(i<=n){
    	if (n % i == 0){
    		cout<<"given num is prime for "<<i<<endl;
		}
		else{
			cout<<"given num  is not prime for "<<i<<endl;
		}
		i++;
	}
 }
