#include <stdio.h>
#include <fstream>
#include <iostream>

using namespace std;

class InstaPost{

    int likes;

    char caption[30];

public:

    void readPost(){  //This function takes the input from the user and stores it into the object

    cout << "Enter likes";
    cin >> likes;
    cout<< "Enter Caption";
    cin >> caption;


    }

    void display(){

    cout << "The likes are "<<likes<<" and the caption is "<<caption;

    }

};

int main(){

    InstaPost pic;

    //Creating and writing into the file
    ofstream obj;
    obj.open("Post.dat", ios::binary); //This opens/creates a binary file with extension .dat

    if (!obj) {
        cout << "Error opening file!" << endl;
         // Return an error code
    }

    pic.readPost(); //This takes the value and stores it into the object

    //The write function i inbuilt into ofstream
    //Syntax: obj.write/read(buffer, size);
    obj.write((char *)&pic, sizeof(pic));

    obj.close();


    //Reading from the binary file
    ifstream robj;
    robj.open("Post.dat", ios::binary);
    if(!obj){
        cout << "File is not open";
    }

    robj.read((char *)&pic, sizeof(pic));

    pic.display();



}


