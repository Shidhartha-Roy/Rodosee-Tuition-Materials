#include <iostream>

using namespace std;

int main(){

    int roll[5];

    //roll[0] = 11;
    //roll[1] = 25;
    //roll[2] = 32;
    //roll[3] = 6;
    //roll[4] = 90;

    //Entering Data
    for(int i=0;i<5;i++){
        cout << "Enter your number: "<<endl;
        cin >> roll[i];
    }

    //Printing array
    cout << "The resulting array is: "<< endl;
    for(int j=0;j<5;j++){

        cout << roll[j] << endl;
    }

}
