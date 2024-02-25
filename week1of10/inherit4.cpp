#include<iostream>
using namespace std;
class Student{
    public:
    int rollno;
    int gr_no;
};

class Jay: public Student{ 
    public:
    string name;
    Jay(int rollno, int gr_no, string name){
        this-> rollno = rollno;
        this -> gr_no = gr_no;
        this -> name = name;
    }
    void Print(){
        cout<<rollno<<" "<<gr_no<<" "<<name<<" "<<endl;

    }
};

class JayVeer: public Student{ 
    public:
    string name;
    JayVeer(int rollno, int gr_no, string name){
        this -> rollno = rollno;
        this -> gr_no = gr_no;
        this -> name = name;
    }
    void print(){
        cout<<rollno<<" "<<gr_no<<" "<<name<<" "<<endl;

    }
};
int main(){
    Jay a1(201, 21, "Jay");
    JayVeer v1(202, 2091, "JayVeer");
    a1.Print();
    v1.print();
return 0;
}