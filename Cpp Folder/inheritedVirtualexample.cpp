#include <iostream>

using namespace std;

class father{


public:

    //Declaring a virtual function whose working can be changes according to context
    virtual void doWork(){
        cout << "Going to Office";
    }

    virtual void wakeUp(){
        cout << "Wakeup at 6am";
    }

};

class daughter: public father{ //Daughter class inherits the function from father class

public:
    void doWork(){
        cout << "Studying my books";
    }

    void wakeUp(){
        cout << "Wake up at 9am";
    }

};
class son: public father{

public:
    void doWork(){
        cout << "Playing Games";
    }

};

int main(){

    father *fptr; //Creating a pointer of the father class

    daughter rodosee; //Creating a daughter class object "Rodosee"

    fptr = &rodosee;  //The father pointer points to your address or you can say you

    fptr -> wakeUp();  //With your address father calls the wakeUp() function
    //Meaning he is telling you to wakeup at 9am
    fptr -> doWork();



    //Try removing the virtual keyword from the father function and see what happens when you run the code

}

