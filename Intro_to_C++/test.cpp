#include <iostream>

using namespace std;

int main(){

    string day = "monday";

    switch(day){
        case "sunday": cout << "Its a holiday";
                       break;
        case "monday": cout << "School Jana padega";
                       break;
        default:       cout << "Its Default";
                       break;
    }
}
