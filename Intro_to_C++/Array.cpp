#include <iostream>


using namespace std;

//Function to print Array
void printArray(string A[]){

    int j = 0;
    while(j<5){
        cout << A[j] << endl;
        j++;
    }

}

//Adding array values
int main(){
    string arr[5]; //Declaring an array

    int i=0;   //Declare and initialize the indexing variable
    while(i<5){
        string str; //Declaring storage variable

        cout << "Enter your String: " << endl;
        cin >> str;

        arr[i] = str;

        i++;
    }
    printArray(arr);



return 0;
}
