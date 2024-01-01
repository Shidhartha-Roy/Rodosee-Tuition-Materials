#include <iostream>

using namespace std;

int main(){
    //This is an unsorted array
    int arr[] = {3,4,5,1,6,2};

    //The solution should look something like this
    //1,2,3,4,5,6

    int queen;
    int slave;
    int min;

    //A variable for swapping
    int temp;

    //First we decide on the position of i and stabalize it
    for(queen = 0; queen< 6; queen++){

        //Now i declares itself as the minimum element
        min = queen;

        //And i also orders j to go through the entire array and keep finding the minimum element
        //until it reaches the end of the array
        for(slave= queen+1; slave<6; slave++){
            //If an element less than the min element is found then that element replaces the min element
            
            if(arr[slave] < arr[min]){
                min = slave;
            }
            //j moves on until the end of the array and searches for any other minimum element

            


        }
        //After the search of j has ended the new min element if any is swapped with the i position

        //swapping
        temp = arr[queen];
        arr[queen] = arr[min];
        arr[min] = temp;


         cout<<endl;
    }

}