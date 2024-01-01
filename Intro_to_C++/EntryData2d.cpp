#include <iostream>

using namespace std;

int main(){

    int arr[4][4];

    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            cout << "Enter your element for position ("<<i<<","<<j<<"): ";
            cin >> arr[i][j];

        }
    }

    //Printing the array
    for(int i=0;i<4;i++){ //This signifies row index
        for(int j=0;j<4;j++){ //This signifies column index
            cout << arr[i][j]<<" ";
    }
    cout << endl;
 }

}
