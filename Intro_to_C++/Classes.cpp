#include <iostream>

using namespace std;

class MyClass{

int z = 5;

public:
    int x = 20; //Data member or Attributes


    int y;




    void printY(int value){
        cout << value + y;
    }


    void takeY(int value){ //Declaration + Implementation
        y = value;
    }

    int seeZ(){
        return z;
    }

    void jack(); //Declaration

};
//Outside definition of function
void MyClass::jack(){
    cout << "Hello";
}

int main(){

    MyClass obj;

    int result = obj.seeZ();

    cout << result;

    //obj.takeY(30);

    //obj.printY(obj.x);

    //obj.jack();



}
