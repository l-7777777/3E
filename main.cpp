#include <iostream>
using namespace std;
#include "info.hpp"
#include "CFunctions.hpp"

int main(int argc, char *argv[]) {
    *argv = CStr::split(argv[0], ' ');
    cout << argv[1] << '\a' << '\n';
}