#include <iostream>

using namespace std;

//Function to perform the swap between two cols
void swap_cols(int arr[5][4], int col1, int col2){
    int temp = 0;
    for(int i=0;i< 5;i++){
        temp = arr[i][col1];
        arr[i][col1] = arr[i][col2];
        arr[i][col2] = temp;
    }
}


int main(){

    int arr[5][4] = {{2,3,1,4},
                     {2,2,2,1},
                     {3,3,3,3},
                     {1,2,4,7},
                     {5,5,5,5}   };

    swap_cols(arr,0,3);


    //Printing the new 2d array
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}