#include<iostream>

using namespace std;


int main() //Main function
{
    char x; //Declaration

    cout<<"enter your stream"<< endl;
    cin>>x;

    for(int i=0;i<10;i++){

        if(x=='s'){
        cout<<"i am a student of science stream"<< endl;
        }

        else if(x=='h'){
        cout<<"i am a student of humanities stream "<< endl;
        }

        else{
        cout<<"i am a student of commerce stream"<< endl;
        }
    }
    return 0;




}

