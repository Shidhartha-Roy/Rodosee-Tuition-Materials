#include <iostream>

using namespace std;

class InstaPost{

private:
    string Caption;
    string Music;

public:
    InstaPost(string c, string m){  //Declaring a parameterized constructor for this class

        Caption = c;
        Music = m;

    }

    //Declaring a copy constructor
    InstaPost(InstaPost &picture){

       Caption = picture.Caption; //It copies the Caption variable value of the old object to the new object
       Music = picture.Music;
    }

    //A normal display function
    void displayPost(){

        cout << "The caption is "<<Caption<<" and the music used is "<<Music<<endl;

    }


};



int main(){

    InstaPost picture1 = InstaPost("Aesthetic Morning","Antariksh by Anuv Jain");    //Creating the first object of the class
    picture1.displayPost();

    InstaPost picture2 = picture1;

    //Using the first object to initialize the next Object
    //By using a default constructor the compiler directly copies the values of the old object to
    //the new object

    picture2.displayPost();


    InstaPost picture3 = InstaPost(picture1); //Using the self defined copy constructor
    picture3.displayPost();





}
