#include <iostream>

using namespace std;

struct car{

    int wheels = 4;

    string type = "SUV";


};

int main(){

    //Declare a variable of the Structure
    car c;
    cout << "The number of wheels in the car are: " << c.wheels << endl;
    cout << "The type of the car is: "<< c.type;

}
