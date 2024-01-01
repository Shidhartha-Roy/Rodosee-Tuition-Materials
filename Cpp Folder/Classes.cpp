#include <iostream>

using namespace std;

class MyClass{

public:
    int x = 20;

private:
    int y;

int z = 5;

public:
    void printY(int value){
        cout << value + y;
    }
public:

    void takeY(int value){
        y = value;
    }

    void jack();

};
void MyClass::jack(){
    cout << "Hello";
}

int main(){

    MyClass obj;

    obj.takeY(30);

    obj.printY(obj.x);

    obj.jack();



}
