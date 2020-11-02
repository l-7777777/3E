#include "CFunctions.hpp"
#include <math.h>

namespace CStr {
    char *split(char *str, char delimiter, int max) {
        char *toReturn[max];
        for (int i = 0; i < sizeof(str); i++) {
            int curPos = 0;
            if (str[i] == delimiter) {
                toReturn[curPos] = substr(str, 0, i - 1);
                curPos++;
            }
        }
        return *toReturn;
    }

    char *substr(char *str, int start, int end) {
        char *toReturn;
        for (int i = start; i < (end + 1); i++) {
            toReturn[i - start] = str[i];
        }
        toReturn[sizeof(toReturn)] = 0x00;
        return toReturn;
    }

    int toInt(char *str) {
        int toReturn = 0;
        for (int i = sizeof(str); i > 0; i--) {
            toReturn += (int) pow(((double) ((int) str[i]) - ((int) '0')), (double) i);
        }
        return toReturn;
    }
}