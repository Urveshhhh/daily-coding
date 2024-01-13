#include<iostream>
using namespace std;
 int main(){
 	int arr[4];
 	int* p = arr;
 	
 	for(int i = 0; i < 4; i++){
 		cout<<"enter value to store in array"<<endl;
 		cin>>arr[i];
	 }
	 
	 for(int i = 0; i < 4; i++){
	 	cout<<"value at array is "<<*p<<endl;
	 	cout<<"value at array is "<<*(p+1)<<endl;
	 	cout<<"value at array is "<<*(p+2)<<endl;
	 	cout<<"value at array is "<<*(p+3)<<endl;	
	 }
	 return 0;
	 
}
