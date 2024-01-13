#include<iostream>
using namespace std;
int area(int a);
int main(){
	int side;
	cout<<"Enter side of square to find Area of square"<<endl;
	cin>>side;
	
	area(side);
	return 0;
}
int area(int a){
	int ans = a * a;
	cout<<"Area of Square is "<<ans;
}
