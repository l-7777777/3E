#include <iostream>
#include <fstream>
#include <string>
#include <streambuf>
using namespace std;
//check Operating system
#ifdef linux //check linux and import Unix file libraries 
    //linux libraries
    #endif
#ifdef _WIN32 //import required windows libraries
    //windows libraries
    #endif



int main() {


    try {
        Main();
    } catch (exception e){
        cout << e.what() << endl;
    }
    cout << "int Main worked \n" << endl;


    }
void Main() {
    std::ifstream t("/mnt/c/Users/lysan/Donwloads/codeTags.html");
    std::string str((std::istreambuf_iterator<char>(t)), std::istreambuf_iterator<char>());
    printf("%s\n", str.c_str());
    cout << "Method is working \n";
    return;
}
