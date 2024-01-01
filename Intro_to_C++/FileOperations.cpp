#include <fstream>   //This contains the classes that support I/O operations to files

using namespace std;

int main(){


    ifstream jack;
    jack.open("test.txt");
    jack.close();

    return 0;
}



