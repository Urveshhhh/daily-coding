#include<iostream>
using namespace std;
int main(){
	int num1, num2, ch, result;
	
	cout<<"enter num 1 & num2 to perform operations";
	cin>>num1>>num2;
	
	cout<<"enter your choice"<<endl;
	cout<<"1. addition"<<endl;
	cout<<"2. subraction"<<endl;
	cout<<"3. division"<<endl;
	cout<<"4. multiplication"<<endl;
	cin>>ch;
	
	switch(ch){
		
		case 1:{
			result = num1 + num2; 
			cout<<"answer ="<<result;
			break;
		}
		
		case 2:{
			result = num1 - num2;
			cout<<"answer ="<<result;
			break;
		}
		
		case 3:{
			result = num1 / num2; 
			cout<<"answer ="<<result;
			break;
		}
		
		case 4:{
			result = num1 * num2; 
			cout<<"answer ="<<result;
			break;
		}
		
		default: {
			cout<<"invalid number";
			break;
		}
	} 
	
	return 0;
	

	
	
	return 0;
}
