#include<iostream>
using namespace std;
int fibo(int);
int main(){
	int num;
	cout<<"enter value"<<endl;
	cin>>num;
	
	fibo(num);
	return 0;
}

int fibo(int x){
	int a = 0;
	int b = 1;
	int nextVal;
	for(int i = 1; i <= x; i++){
		cout<<a<<endl;
		nextVal = a + b;
		a = b;
		b = nextVal;
	}
}
