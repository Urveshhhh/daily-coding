#include<iostream>
using namespace std;
int per(int a, int b);
int main(){
	int leng, brdth;
	cout<<"ente rlength ans breadth to find perimeter of rectangle"<<endl;
	cin>>leng>>brdth;
	
	per(leng, brdth);
	return 0;
}

int per(int a, int b){
	int ans;
	ans = 2*(a+b);
	cout<<"perimeter of rectangle is "<<ans;
}
