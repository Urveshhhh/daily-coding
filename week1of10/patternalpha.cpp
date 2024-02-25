#include<iostream>
using namespace std;
int main(){
    int row;
    cout<<"enter rows to print \n";
    cin>>row;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < i; j++){
            cout<<(char)('A' + j);
        }
        cout<<endl;
    }
return 0;
}