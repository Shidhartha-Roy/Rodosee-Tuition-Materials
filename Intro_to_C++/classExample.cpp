#include <iostream>

using namespace std;

class instagramPost{

public:
    int likes = 0; //Data member

public:
    void doubleTap(){  //Member Functions

        likes++;
        cout << likes;
}};

int main(){

    instagramPost cuteDog; //Making objects


    cuteDog.doubleTap();

}
