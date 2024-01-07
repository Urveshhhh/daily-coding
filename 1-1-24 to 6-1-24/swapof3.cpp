#include<iostream>
using namespace std;
 int main(){
    int a,b,c,d;
    cout<<"enter value of a b c\n";
    cin>>a>>b>>c;
    cout<<"a ="<<a<<endl;
    cout<<"b ="<<b<<endl;
	cout<<"c ="<<c<<endl;
    d=a,a=b,b=c,c=d;
    cout<<"swapping  a = "<<a<<endl;
    cout<<"swapping  b = "<<b<<endl;
    cout<<"swapping  c = "<<c<<endl;
   return 0;
 }
