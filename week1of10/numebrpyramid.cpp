#include<iostream>
using namespace std;
 class Prtpyramind{
    public:
    int r;
    Prtpyramind(int n)
    {(int i = 1; i <= n; i++){
         for(int j = 1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<" "<<endl;
    }
    }
 };
int main(){
    int n;
    cout<<"enter numebr: "<<endl;
    cin>>n;
    Prtpyramind(n);
    return 0;
}