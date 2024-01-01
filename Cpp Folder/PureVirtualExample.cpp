#include <iostream>

using namespace std;

class father{

public:
    virtual void giveExam() = 0; //This function has no meaning to your father
    //That means if somebody calls this function there would be no response as this function
    //holds no task to do. In the past it might have.
    //The = 0 means exactly that which in turn makes it a pure virtual function

};

class daughter: public father{

public:
    int x;

    void giveExam(){
       cout << "Going to give exam"; //For you this function has an implementation
        //That is, it has a particular task assigned to it
    }

};

int main(){

    father *fptr;

    daughter rodosee;

    fptr = &rodosee;
    fptr -> giveExam();

}
