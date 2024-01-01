#include <iostream>

using namespace std;

// int main(){
//     // int a = 10;

//     // //Declaring a pointer
//     // int* ptr;

//     // //Initializing a pointer
//     // ptr = &a;

//     // //Using Dereference to get the value 
//     // cout<<"The value of the variable is: "<<*(ptr);

//     //Using dynamic memory allocation
//     int* dtr;
//     dtr = new int; //---> Using new keyword to assign memory space to the pointer dtr during runtime
//     cout<<"Enter your value: ";
//     cin>>*(dtr);   //---> Using the dereference operator to point to the value part of the pointer

//     cout<<"The value is: "<<*(dtr);

//     delete dtr; //---> Using the delete keyword to delete the pointer once the execution is complete and it frees up memory space.

// int* aptr;
// int arr[5];
// aptr = arr;
// }

// int main(){
//     int* aptr;
//     int arr[] = {1,2,3,4,5,6,7,8};
//     aptr = arr;
//     cout<<"The pointer initially will point to arr[0] which is: "<<*(aptr)<<endl;

//     cout<<"But if i want to print the value of the 4th element of the array"<<endl;
//     cout<<"The value of arr[3] would be: "<<*(aptr+3)<<endl;


// }

//Function returning pointer
int* Sum(){
    int a = 10;
    int b = 20;
    int result = a+b;

    int* ptr = &result;

    return ptr;
}

int main(){
    cout<<"The result is: "<<*(Sum());
}
