#include <iostream>

using namespace std;

//This is the base class
class Base{

    int a = 10; //This here is a private data member

protected:

    int c = 30; //This is a protected data member

public:
    int b = 20; //This is a public data member

    void display(){

        cout<<"The value of a is "<<a<<endl;
        cout<<"The value of b is "<<b<<endl;


    }



};

//This the Derived Class
class Derived: public Base{


public:
    void displayDerived(){

        //cout<<"The value of a is "<<a<<endl;  ---> This line of code gives an error as "a" is private in the Base class and when derived from it the private members are not derived

        cout<<"The value of b is "<<b<<endl; //This member works as the member "b" is declared publicly in the Base Class

        cout<<"The value of c is "<<c<<endl; //This member function is trying to access the protected data member that is in the Base Class




    }


};



int main(){

    //Base b;
    //b.display();

    Derived d;
    d.displayDerived();

}
