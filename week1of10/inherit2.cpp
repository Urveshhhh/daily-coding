#include<iostream>
using namespace std;
class Vehicle {
    public:
    int capacity;
    double milage;
    string name;
    int price;
};

class Bike : Vehicle{
    public:
    Bike(int capacity, double milage, string name, int price){
     this -> capacity = capacity;
     this -> milage = milage;
     this -> name = name;
     this -> price = price;
    }

    void disp(){
        cout<<capacity <<" "<<milage <<" "<<name<<price<<endl;
    }
};

 class car : public Vehicle{
    public:
    car(){
        capacity = 5;
        milage = 70;
        name = "Swift";
        price = 7900000;
    }
    void disp(){
        cout<<capacity<<" "<<milage<<" "<<name<<" "<<price<<" "<<endl;
    }
 };

int main(){
    Bike b1(5, 67, "hero splendor", 670000);
    b1.disp();
    car c1;
    c1.disp();
    return 0;
}