#include <iostream>

using namespace std;

int main(){
    int turn = 5;
    int num = rand();  //Random function

    int choice;


    int i=0;

    while(i<5){
    cout << "Enter your choice: " << endl;
    cin >> choice;
    if(choice>num){
        cout << "Your choice is greater than the number." << endl;

    }
    else if(choice<num){
        cout << "Your choice is smaller than the number." << endl;

    }
    else{
        cout << "YOU WIN";
        break;
    }

    }



}
