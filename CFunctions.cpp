#include "CFunctions.hpp"

namespace CStr {
    char *split(char *str, char delimiter, int max) {
        char *toReturn[max];
        for (int i = 0; i < sizeof(str); i++) {
            int curPos = 0;
            if (str[i] == delimiter) {
                toReturn[curPos] = substr(str, 0, i);
                curPos++;
            }
        }
        return toReturn;
    }

    char *substr(char *str, int start, int end) {
        char *toReturn;
        for (int i = start; i < (end + 1); i++) {
            toReturn[i - start] = str[i];
        }
        toReturn[sizeof(toReturn)] = 0x00;
    }

    int toInt(char *str) {
        return (int) (str - '0');
    }
}