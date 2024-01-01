#include <fstream>   //Contains functions of file operations

#include <iostream>

using namespace std;

int main(){

    //!Create A file
    //*ofstream
    // is a class that can be used to create and write into files.
    ofstream create;
    create.open("Rodosee.txt");
    if(create.is_open()){
        cout<<"File is Open"<<endl;
    }
    else{
        cout<<"File is not open"<<endl;
    }
    create.close();


    //*fstream
    fstream obj;
    obj.open("Test.txt", ios::out);
    if(obj.is_open()){
        cout<<"File is open"<<endl;
    }
    else{
        cout<<"File is not open"<<endl;
    }
    obj.close();


    //!Writing into a File
    ofstream writingText;
    writingText.open("Rodosee.txt");
    if(writingText.is_open()){
        cout<<"File is open"<<endl;
        writingText << "Happy Birthday";
    }
    else{
        cout<<"File is not open"<<endl;
    }
    writingText.close();


    //!Append Data
    ofstream appendingData;
    appendingData.open("Rodosee.txt", ios::app);
    if(appendingData.is_open()){
        cout<<"File is open"<<endl;
        appendingData << ",Rodosee";
    }
    else{
        cout<<"File is not open"<<endl;
    }
    appendingData.close();


    //!Read Data From file
    ifstream readingData;
    readingData.open("Rodosee.txt");
    if(readingData.is_open()){
        cout<<"file is open for reading"<<endl;
        string line;
        getline(readingData, line);
        cout<<"The line from the file is "<<line<<endl;
    }
    else{
        cout<<"File is not open"<<endl;
    }
    readingData.close();

}
