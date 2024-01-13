#include<iostream>
using namespace std;
int fac(int);
int main(){
	int a;
	cout<<"enter value to calculate factorial"<<endl;
	cin>>a;
	
	fac(a);
	cout<<a<<endl;
	return 0;
}

int fac(int x){
	int a = 1;
	for(int i = 2; i <= x; i++){
		a = a*i;
		return a;
	}
}
