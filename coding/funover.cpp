#include<iostream>
using namespace std;
int add(int a, int b){
	cout<<"sum = "<<(a + b);
}
int add(double a, double b, double c){
	cout<<"sum ="<<(a + b + c);
}
int main(){
	int num1, num2,num3;
	cout<<"enter value of num1 && num 2 && num3"<<endl;
	cin>>num1>>num2>>num3;
	add(num1,num2,num3);
	//add(5.26,5,5);
	return 0;
}
