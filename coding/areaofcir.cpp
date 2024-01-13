#include<iostream>
using namespace std;
int area(int rad);
int main(){
	float radius;
	cout<<"Enter radius to find Area of Circle"<<endl;
	cin>>radius;
	
	area(radius);
	return 0;
}
int area(int rad){
	int ans = 3.14 * rad * rad;
	cout<<"Area of circle is "<<ans;
}
