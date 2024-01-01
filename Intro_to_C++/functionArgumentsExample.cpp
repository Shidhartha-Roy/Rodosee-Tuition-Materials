#include <iostream>

using namespace std;

//Passing by value
void swap(string &a, string &b){

    string temp = a;
    a = b;
    b = temp;



    //cout << "After swapping, rodosee has "<<a<<" and rohini has "<<b<< endl;

}


int main(){

    string rodosee = "apple";
    string rohini = "mango";

    cout << "Before swapping, rodosee has "<<rodosee<<" and rohini has "<<rohini<< endl;

    swap(rodosee,rohini);

    cout << "After swapping, rodosee has "<<rodosee<<" and rohini has "<<rohini<< endl;

    cout << rodosee;


}
