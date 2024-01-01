#include <iostream>

using namespace std;

class Insta{

string caption;
string music;

public:

    Insta(string c = "Hello World", string m = "Happy Birthday"){

       caption = c;
        music = m;

    }


    void displayPost(){

    cout << "The caption is "<<caption<<" & the music is "<<music<<endl;

    }


};


int main(){

    Insta post1 = Insta("Song");
    post1.displayPost();

    //Insta post("Hello Night");
    //post.displayPost();


}

