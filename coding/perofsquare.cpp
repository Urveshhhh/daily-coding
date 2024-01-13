#include<iostream>
using namespace std;
int per(int a);
int main(){
	int side;
	cout<<"Enter side of square to find perimeter of square"<<endl;
	cin>>side;
	
	per(side);
	return 0;
}
int per(int a){
	int ans = 4 *a;
	cout<<"perimeter of Square is "<<ans;
}
