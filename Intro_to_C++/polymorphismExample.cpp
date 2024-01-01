#include <iostream>

using namespace std;

class dost{

public:


    void behaviour(int friends, int teachers){
        cout << "Very naughty";
    }

    void behaviour(int Parents){
        cout << "Very innocent";
    }

};
int main(){

    dost ram;

    ram.behaviour(2,3);

}
