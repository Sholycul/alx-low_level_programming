#include <stdio.h>
#include <limits.h>


int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    while (*s == ' ') {
        s++;
    }

    if (*s == '-') {
        sign = -1;
        s++;
    } else if (*s == '+') {
        s++;
    }

    while (*s >= '0' && *s <= '9') {
        int digit = *s - '0';

        if (result > (INT_MAX - digit) / 10) {
            return (sign == 1) ? INT_MAX : INT_MIN;
        }

        result = result * 10 + digit;
        s++;
    }

    return sign * result;
}

