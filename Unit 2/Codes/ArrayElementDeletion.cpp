#include <iostream>

using namespace std;

int main(){
    // This is the array from which we will delete the element
    int arr[10] = {2,3,4,5};

    // The total signifies the total number of elements present in the array Initially
    int total = 4;

    // Key is the variable that stores the value that you want to delete
    int key;

    // This is a boolean value that checks if the value is actually found or not
    bool found = false;

    // This takes the value which you want to delete from you
    cout<<"Enter the element you want to delete: ";
    cin>>key;

    // The first loop is used to iterate or traverse or travel through the entire array
    for(int i=0; i<total; i++){

        // This if condition checks if during traversal you have found the required elemnet or not
        if(arr[i] == key){ //Searching


            // Logically: After deletion the space of the value gets empty so we have to make sure 
            // that the space gets filled up and the size of the array also reduces.

            //This loop takes the element next to the deleted value and keeps it into the place which is vacant
            // and also does the same with its next neighboours
            for(int j = i; j<(total - 1); j++){
                arr[j] = arr[j+1];

                //Testing
                // for(int i=0;i<total;i++){
            
                //     cout<<" "<<arr[i];
                // }
                // cout<<endl;
            }

            // This sets the found value to true signifying that the value was found
            found = true;
            

            //As one element is deleted now the size of the array which was let's say 10 at the start becomes 9
            total--;
        }
    }

    //This condition if the found value is true or not and if it is prints "Element deleted" and the new array after deletion
    if(found){
        cout<<"Element Deleted"<<endl;

        // Printing the new array
        cout<<"New Array: "<<endl;
        for(int i=0;i<total;i++){

            cout<<" "<<arr[i];
        }
        
    }
    else{
        cout<<"Element Not Found";
    }

    
}