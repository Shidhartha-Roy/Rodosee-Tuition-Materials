#include <iostream>

using namespace std;


class Test{
    int a;
    int b;

public:
    Test(){
        a = 10;
        b = 20;

    }
    Test(int x, int y){

        a = x;
        b = y;

    }

    void multiply(){

        cout << "The value of a is "<<a<<endl;
        cout << "The value of b is "<<b<<endl;
        cout << "Their Product is "<<a*b<<endl;


    }





};

int main(){

    Test t;
    t.multiply();

}
