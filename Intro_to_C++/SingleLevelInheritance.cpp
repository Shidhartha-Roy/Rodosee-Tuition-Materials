#include <iostream>

using namespace std;

//This is the most basic type of Inheritance which has just one base class and one derived class
//Base Class
class Base{

public:
    void d1(){

    cout << "This is the Base Display"<<endl;

    }

};

class Derived: public Base{

public:
    void d2(){


    cout << "This is the Derived Display"<<endl;

    }

};

int main(){

    Derived d;
    d.d1();

}
