#include<iostream>
using namespace std;
class Human{
   protected:
   string name;
   int roll_no;
   public:
   Human(){
    cout<<"Human constructor call"<<endl;
   }
};

class Student: public Human{
    private:
    int age;
    float fees;

    public:
    Student(){
        cout<<"Student constructor is called"<<endl;
    }

};

int main(){
    //Student("urvesh", 2038, 34, 36000);
    Student a1;
}