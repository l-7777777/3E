#include <sys/types.h> 
#include <sys/stat.h> 
#include <unistd.h>
#include <fcntl.h>
#include "../CFunctions.hpp"
#include <iostream>
using namespace std;

namespace LFile {
    enum FileMode {
        Read = O_RDONLY,
        Write = O_WRONLY,
        ReadWrite = O_RDWR
    };

    enum FileFlags {
        Append = O_APPEND,
        Create = O_CREAT
    };

    class File {
        private:
        int handle;

        public:
        char *path;

        int open(FileMode mode, int flags) {
            handle = ::open(path, flags, mode);
            return handle == -1 ? -1 : 0;
        }

        char *read(int size) {
            char *toReturn[size];
            ::read(handle, &toReturn, size);
            return *toReturn;
        }

        int getSize() {
            off_t toReturn = lseek(handle, 0, SEEK_END);
            lseek(handle, 0, SEEK_SET);
            return toReturn;
        }

        char *readAll() {
            return read(getSize());
        }
    };
}

int main(int argc, char **argv) {
    LFile::File file;
    file.path = argv[0];
    if (file.open(LFile::Read, 0) == 0) {
        cout << "Opening file succeeded" << '\n';
    }
    cout << file.read(10) << '\n';
}