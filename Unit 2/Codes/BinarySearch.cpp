#include <iostream>

using namespace std;

//Binary Search Function
//n --> is the size of the array
void search(int a[], int key, int n){
    
    //Variables
    int low = 0;
    int high = n-1;
    bool found = false;

    while(low < n){
        int mid = (high + low)/2;
        if(key == a[mid]){
            cout<<"Found element "<<key<<" at index: "<<mid<<endl;
            found = true;
            break;
        }
        else if(key > a[mid]){
            low = mid+1;
        }

        //(key < a[mid])
        else{
            high = mid-1;
        }
    }


    if(!found){
        cout<<"Element Not Found"<<endl;
    }
}

//Driver Code
int main(){
    int arr[] = {2,5,8,12,16,23,38,56,72,91};
    int key = 102;
    int n = 10;
    search(arr,key,n);
}