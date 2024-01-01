#include <iostream>

using namespace std;

class base{

public:


    virtual void show(){
        cout << "This is base Show function";
    }

};

class derived: public base{

public:
    void show(){
        cout << "This is derived Show function";
    }

};

int main(){

    base *bptr;
    derived dobj;

    bptr = &dobj;

    bptr->show();

}
