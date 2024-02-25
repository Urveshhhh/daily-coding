#include<iostream>
using namespace std;
class Bank{
    private:
    int acc_no;
    string name;
    int balance;
    public:
    void deposite(){
        int d;
        cout<<"Enter amount to deposite: "<<endl;
        cin>>d;
        if(d > 0 ){
            balance+=d;
        }
    }
    void get_data(){
        cout<<"Enter account number: "<<endl;
        cin>>acc_no;
        cout<<"Enter name: "<<endl;
        cin>>name;
        cout<<"Enter balance: "<<endl;
        cin>>balance;
    } 
   void display(){
    cout<<acc_no <<" "<<name<<" "<<balance<<" "<<endl;
   }

};
int main(){
    Bank b1;
    b1.get_data();
    b1.deposite();
    b1.display();
    return 0;
}