#include <iostream>

using namespace std;

class Post{

private:
    string tagged;

public:
    //Constructor
    Post(){

        cout <<"Creating Objects"<<endl;
        tagged = "amigoscode";



    }

    //Destructor  //~ --> Tilde
    ~Post(){

        cout << "Destructor destroying objects"<<endl;

    }

    //Normal Function
    void display(){

        cout << "The tagged person is "<<tagged<<endl;

    }



};



int main(){

    //Creating object of the class
    Post picture1;
    Post picture2;
    Post picture3;
    Post picture4;
    //Display the tagged person
    picture1.display();

    //Not doing anything to call the destructor
    //The number of time destructor is called = no. of objects you create



}
