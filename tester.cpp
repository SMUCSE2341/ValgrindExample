#include <iostream>

using std::cout;
using std::endl;

int main(int argc, char** argv){

    cout << "Hello World!" << endl;
    int x = 10;

    int* ptr = new int[x];
    ptr[0] = 25;
    delete ptr;
    return 0;

}
