#include <fstream>
#include <iostream>

using namespace std;

int main(){


    //Creating a file
    fstream obj;
    obj.open("test.txt", ios :: out);
    if(obj.is_open()){
        cout<<"File is Open"<<endl;
    }
    else{
        cout << "File is not open";
    }
    obj.close();

    //Writing to a file
    fstream fileObj;
    fileObj.open("test.txt", ios :: out);
    if(fileObj.is_open()){
        cout<<"File is open";
        fileObj << "Hello There";
    }
    else{
        cout << "File is not open";
    }
    fileObj.close();

    //Read Data
    fstream readObj;
    readObj.open("test.txt", ios :: in);
    if(readObj.is_open()){
        string line;
        getline(readObj, line);

        cout << "This is from file: "<<line<<endl;
        readObj.close();
    }
    else{
        cout <<"File Not Found!";
    }

    //Appending Data
    fstream appendObj;
    appendObj.open("test.txt", ios :: app);
    if(appendObj.is_open()){
        string line = " My friend";
        appendObj << line;
        appendObj.close();
    }
    else{
        cerr << "File is not open";
    }



}
