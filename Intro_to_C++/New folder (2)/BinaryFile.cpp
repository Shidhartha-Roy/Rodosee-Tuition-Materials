#include <fstream>
#include <iostream>

using namespace std;

class InstaPost{

    int likes;         //--> 2 bytes

    char caption[30];  //---> 30 characters --> 30 bytes

    //total: 32 bytes

public:

    void readPost(){  //This function takes the input from the user and stores it into the object

    cout << "Enter no. of likes: ";
    cin >> likes;
    cout<< "Enter Caption: ";
    cin >> caption;


    }
    string returnCaption(){
        return caption;
    }


    void display(){

    cout << "The likes are "<<likes<<" and the caption is "<<caption;

    }

};


int main(){

    InstaPost post1;

    // Creating and writing into the file
    ofstream obj;
    obj.open("Post.dat", ios::binary); //This opens/creates a binary file with extension .dat

    if (!obj) {
        cout << "Error opening file!" << endl;

    }
   
    else{
        
        post1.readPost(); //This takes the value and stores it into the object


        //The write function i inbuilt into ofstream
        
        //Syntax: obj.write/read(buffer, size);
        obj.write((char *)&post1, sizeof(post1));

        obj.close();

    }

    ifstream readObj;
    readObj.open("Post.dat", ios::binary);
    if(!readObj){
        
        cout<<"The file is not open"<<endl;
    }
    else{
        readObj.read((char *)&post1, sizeof(post1));
        post1.display();
    }
    readObj.close();


    //Modifying a file
    //While modifying we use both ifstream and ofstream classes
    string capChange;
    cout<<"Enter the Caption to change: "<<endl;
    cin>>capChange;

    readObj.read((char *)&post1, sizeof(post1));

    if(capChange == post1.returnCaption()){
        //Removing the old file
        remove("Post.dat");
        //creating a new file
        obj.open("Post.dat",ios::binary);
        //Entering data
        post1.readPost();
        obj.write((char *)&post1, sizeof(post1));
    }
    else{
        cout<<"No such post exists"<<endl;
    }

    








    



}


