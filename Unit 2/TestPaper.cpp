#include <iostream>

using namespace std;

class BOX{
  int BoxNumber;
  float Side;
  float Area;

  void ExecArea(){
    Area = Side * Side;
  }

  public:
    void GetBox(){
        cout<<"Enter the Box Number: "<<endl;
        cin>>BoxNumber;
        cout<<"Enter the Side: ";
        cin>>Side;
        ExecArea();

    }

    void ShowBox(){
        cout<<"The Box Number is: "<<BoxNumber<<endl;
        cout<<"The Side value is: "<<Side<<endl;
        cout<<"The Area value is: "<<Area;
    }
};
