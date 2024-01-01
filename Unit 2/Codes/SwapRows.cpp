#include <iostream>

using namespace std;

//Function to perform the swap between two rows
void swap_rows(int arr[3][3], int row1, int row2){
    //temporary variable
    int temp = 0;

    for(int i=0;i < 3;i++){
        temp = arr[row1][i];
        arr[row1][i] = arr[row2][i];
        arr[row2][i] = temp;
    }
}


int main(){

    int arr[3][3] = {{2,3,4},
                     {5,6,7},
                     {1,8,9}
                        };

    swap_rows(arr,0,2);


    //Printing the new 2d array
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}