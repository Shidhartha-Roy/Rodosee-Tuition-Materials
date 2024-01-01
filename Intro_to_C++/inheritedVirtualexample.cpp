#include <iostream>

using namespace std;

class father{

public:

    //Declaring a virtual function whose working can be changes according to context
    virtual void doWork(){
        cout << "Going to Office";
    }

};

class daughter: public father{ //Daughter class inherits the function from father class

public:
    void doWork(){
        cout << "Studying my books";
    }

};

int main(){

    father *fptr; //Creating a pointer of the father class

    daughter rodosee; //Creating a daughter class object "Rodosee"

    fptr = &rodosee;  //The father pointer points to your address or you can say you

    fptr -> doWork();  //With your address father calls the doWork() function
    //Meaning he is telling you to study your books


    //Try removing the virtual keyword from the father function and see what happens when you run the code

}

