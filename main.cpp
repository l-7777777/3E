#include <iostream>
using namespace std;
#include "info.hpp"
#include "CFunctions.hpp"
#include <string.h>


int main(int argc, char *argv[]) {
    cout << "Main.cpp runned! \n";
    *argv = CStr::split(argv[0], ' ');
    for (int i = 0; i < argc; i++){
        cout << argv[i] << endl;
    }
}