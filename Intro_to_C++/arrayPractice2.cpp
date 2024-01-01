#include <iostream>

using namespace std;

//Function to print Array
void printArray(string A[]){

    //int j = 0;
    //while(j<3){
        //cout << A[j] << endl;
        //j++;
    //}
}

int main(){

    //If data is Known
    string Names[] = {"Ram","Hari","Sham"}; //Declared Array
    string address[10];
    //If data is not known
    //string arr[10];

    //printArray(Names);

    //Printing Array
    for(int i=0;i<3;i++){
        cout << Names[i] << endl;
    }
    //Reverse
    for(int i=2;i>=0;i--){
        cout << Names[i] << endl;
    }

    return 0;

}

//NOTE: The size of an array once declared cannot be changed or extended.
