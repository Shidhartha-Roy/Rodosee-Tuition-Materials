#include <iostream>

using namespace std;

class Student{

    int HS_marks;  //Member variable

public:
    //Default Constructor
    Student(){

        HS_marks;

    }

    //Parameterized Constructor
    Student(int intrenalMarks, int finalMarks){
        HS_marks = intrenalMarks + finalMarks;
    }



    void marksDisplay(){  //Normal Function
        cout << "The Higher Secondary marks obtained are "<<HS_marks<<endl;
    }


};

int main(){

    Student ram;
    ram.marksDisplay();



    //Declaring objects with parameters
    Student rodosee = Student(25,70);

    rodosee.marksDisplay();


}




