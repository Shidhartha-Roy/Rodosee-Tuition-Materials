#include <iostream>

using namespace std;

int main(){

 int arr[2][2] = {{2,3},{1,3}};

 //Printing the 2D array
 for(int i=0;i<2;i++){ //This signifies row index
    for(int j=0;j<2;j++){ //This signifies column index
        cout << arr[i][j]<<" ";
    }
    cout << endl;
 }
}
