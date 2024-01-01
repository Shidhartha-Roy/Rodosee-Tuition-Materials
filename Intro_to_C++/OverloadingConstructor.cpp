#include <iostream>

using namespace std;

class InstaPost{

//Defining some characteristics
private:
    //member variables
    string caption;
    string music;

//Defining the constructors
public:
    //The Default Constructor
    InstaPost(){  //  ---> Jab kuch nhi hoga to yeh hoga, but i decide the default value

        caption = "A cute Dog";
        music = "Iraaday by Rovalio";

    }

    //The Constructor with one parameter
    InstaPost(string c){

        caption = c;  //The caption of the post is passed as a parameter but not the music
        music = "Antariksh by Anuv Jain";

    }


    //The Constructor with two parameters
    InstaPost(string c, string m){

        caption = c;
        music = m;
        //Both values of music and caption are passed as parameters

    }

    //As we can see a constructor is overloaded three times with only difference in number of parameters

    //A normal function
    void display(){

        cout << "The music used is "<<music<<" and the caption is "<<caption<<endl;

    }

};


int main(){

    InstaPost Post1; //This calls the default constructor
    Post1.display();

    InstaPost Post2 = InstaPost("Aesthetic Morning");  //This calls the constructor with one parameter
    Post2.display();

    InstaPost Post3 = InstaPost("Aesthetic Night","Khayaal by Talwinder"); //This calls the constructor with two parameters
    Post3.display();

}
