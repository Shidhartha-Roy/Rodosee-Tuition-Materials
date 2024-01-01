#include <iostream>

using namespace std;

int main(){
    int n;
    cout << "Enter a number: " << endl;
    cin >> n;

    //Switch Case
    switch(n){
        case 1: cout << "The number is 1";
                break;
        case 2: cout << "The number is 2";
                break;
        case 3: cout << "The number is 3";
                break;
        case 4: cout << "The number is 4";
                break;
        default: cout << "This is a default number";
                break;
    }


    //If - else
    // if(n==0){
    //     cout << "The number is 0";
    // }
    // else if(n==1){
    //     cout << "The number is 1";
    // }
    // else{
    //     cout << "You are confused";
    // }
}

