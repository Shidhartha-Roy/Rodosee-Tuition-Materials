#include <iostream>

using namespace std;

class A{

protected:
    int a; //A protected data member of class A

public:
    void seta(int x){

        a = x;

    }



};
class B{

protected:
    int b; //A protected data member of class B

public:
    void setb(int y){

        b = y;

    }



};

class Derived: public A,public B{

public:
    void display(){
        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;
        cout<<"The value of their sum is "<<a+b<<endl;



    }


};


int main(){

    Derived d;
    d.seta(10);
    d.setb(20);
    d.display();



}
