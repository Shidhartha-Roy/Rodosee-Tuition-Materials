#include <iostream>

using namespace std;

class Animal{
//Super Base class
public:
    void Walk(){

        cout<<"An animal is walking"<<endl;

    }


};

//Middle Base class deriving from Super Base
class Mammal: public Animal{

public:
    void Breathing(){

    cout<<"A mammal is breathing"<<endl;

    }



};

//Derived class
class Human: public Mammal{

public:
    void Speaking(){

        cout<<"A human is speaking"<<endl;

    }


};



int main(){

    Human raju;
    raju.Speaking(); //From own class
    raju.Walk();     //From Super base class
    raju.Breathing(); //From Middle Base class

}
