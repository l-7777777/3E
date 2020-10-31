#include "info.hpp"
#include "CFunctions.hpp"
#ifdef OS_LINUX
    
#endif

int main(int argc, char *argv[]) {
    *argv = CStr::split(argv[1], ' ', CStr::toInt(argv[0]));
}