#include <iostream>

using namespace std;

int main(){
    //This is an unsorted array
    int arr[] = {5,4,2,1,8,10,11};

    //The solution should look something like this:
    //1,2,4,5,8,10,11
    int i;
    int j;
    int key;
    for(i=1;i<7;i++){

        //The variable i indicates the first element of the unsorted array to the right
        //This line stores the value at the i index in the key variable
        key = arr[i];
        //The j variable represents the last element in the sorted array to the left
        j = i-1;
        
        while(j >= 0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }
        
        arr[j+1] = key;
    }
    //Printing the Sorted Array
    for(int k=0; k<7;k++){
            cout<<arr[k]<<" ";
        }


}