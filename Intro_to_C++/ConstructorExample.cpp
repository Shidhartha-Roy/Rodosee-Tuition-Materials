#include <iostream>

using namespace std;

class Test{

private:
    int x; //Member Variable/Characteristic


public:


    Test(){   //Constructor Declaration  --> Default Constructor

        x = 1;
}

    //Normal Function
    void display(){
        cout << "The value of x is "<<x;
    }


};




int main(){

    Test object; //object declaration --> It calls the constructor which makes the value
    //of x = 5
    object.display();


}
