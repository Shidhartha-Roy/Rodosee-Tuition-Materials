#include <iostream>

using namespace std;


class father{

protected:
    string car;

public:

    father(){

        car = "Scorpio";

    }


    void license(){

        cout << "Driving Car "<<car<<endl;

    }




};

class daughter: public father{

public:
    void daughterLicense(){

        cout << "Daughter Driving car "<<car<<endl;

    }


};


int main(){


    //father ashok;
    //ashok.license();

    daughter rodosee;
    rodosee.license();


}
