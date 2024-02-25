#include<iostream>
using namespace std;
class Student{
    public:
    int roll;
    string name;
    double fees;
};

class Jarvis : public Student{
    public:
    Jarvis(){
        roll = 201;
        name = "jarvis";
        fees = 20000;
    }
    
    void display(){
        cout<<roll<<" "<<name<<" "<<fees<<endl;
    }
};

class Thomas : public Student{
    public:
    Thomas(){
        roll = 202;
        name = "Thomas";
        fees = 23000;
    }
    
    void display(){
        cout<<roll<<" "<<name<<" "<<fees<<endl;
    }
};

int main(){
    Jarvis j1;
    Thomas t1;
    j1.display();
    t1.display();
}