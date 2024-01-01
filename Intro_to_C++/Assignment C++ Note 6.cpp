#include <iostream>

using namespace std;

int main(){
    int* aptr = new int[5];
    


    for(int i=0; i<5;i++){
        cout<<"Enter your element: "<<endl;
        cin>>aptr[i];
    }
    cout<<"Your array is: "<<endl;

    for(int i=0; i<5;i++){
        
        cout<<aptr[i];
    }

    delete aptr;

}