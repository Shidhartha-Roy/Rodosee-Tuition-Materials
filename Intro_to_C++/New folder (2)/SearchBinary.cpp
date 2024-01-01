#include <iostream>
#include <fstream>

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

    //Returns the number of likes for each object entry
    int returnLikes(){

        return likes;

    }

    void display(){

    cout << "The likes are "<<likes<<" and the caption is "<<caption;

    }

};


int main(){

    InstaPost pic;

    ofstream obj("Search.dat", ios::binary);
    if(!obj){
        cout << "File not open";
    }

    for(int i=0;i<5;i++){
        pic.readPost();
        obj.write((char *)&pic, sizeof(pic));
    }
    obj.close();

    int L;
    cout << "Enter the number of likes to search: ";
    cin >> L;

    ifstream sobj;
    sobj.open("Search.dat", ios::binary);
    if(!obj){
        cout << "File is not open";
    }


    while(sobj.read((char *)&pic, sizeof(pic))){
        if(L == pic.returnLikes()){
            cout << "hello";
            pic.display();
        }
    }
    sobj.close();




}
