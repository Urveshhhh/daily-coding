#include<iostream>
using namespace std;
int area(int a, int b);
int main(){
	int leng, brdth;
	cout<<"ente rlength ans breadth to find Area of Rectangle"<<endl;
	cin>>leng>>brdth;
	
	area(leng, brdth);
	return 0;
}

int area(int a, int b){
	int ans;
	ans = (a*b);
	cout<<"Area of rectangle is "<<ans;
}
