#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>
using namespace std;

void Main();

int main() {
    try {
        Main();
        return 0;
    } catch (exception e) {
        cout << e.what() << endl;
        return -1;
    }
}

void Main() {
    std::ifstream t("/mnt/c/Users/lysan/Donwloads/codeTags.html");
    std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
    printf("%s\n", str.c_str());
    return;
}