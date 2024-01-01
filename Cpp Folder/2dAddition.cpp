#include <iostream>

using namespace std;


int main(){

        //Initializing two 4x4 matrixes
        int matrix1[4][4] = {{1,2,6,7},{3,4,7,8},{1,2,3,5},{2,3,5,4}};   //Change the values and try on your own
        int matrix2[4][4] = {{2,3,0,2},{4,5,2,1},{3,2,1,4},{0,1,5,6}};

        //Initializing a result array to store the results of the addition
        int result[4][4];

        //Nested for loop to add the elements ---> Try to analyze the code
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                result[i][j] = matrix1[i][j] + matrix2[i][j];

            }
        }
        //Printing the result array
        for(int i=0;i<4;i++){
            for(int j=0;j<4;j++){
                cout << result[i][j]<<" ";
            }
            cout << endl;
        }

}
