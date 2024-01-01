#include <iostream>

using namespace std;

int main(){
    // int arr[5] = {2,6,3,10,8};
    // int key = 7;
    // for(int i = 0; i<5; i++){
    //     if(arr[i] == key){
    //         cout<< key<< " found at index "<<i;
    //         break;

    //     }
    //     if(i == 4){
    //         cout<<"Key Not Found"<<endl;
    //         break;
    //     }
        
    // }

    string names[] = {"Ram","Sham","Rodosee","Tina"};
    string key = "Sid";
    bool found = false;

    for(int i=0;i<4;i++){
        if(names[i] == key){
            found = true;
            cout<<"The value is at index: "<<i<<endl;
            break;
        }
        
    }
    if(!found){
        cout<<"The value is not present";
    }
    
    
}