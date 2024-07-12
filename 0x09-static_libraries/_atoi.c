#include "main.h"

int _atoi(char *s)
{
    int num = 0, sign = 1;

    if (*s == '-') {
        sign = -1;
        s++;
    }

    while (*s) {
        if (*s >= '0' && *s <= '9')
            num = num * 10 + (*s - '0');
        else
            return sign * num;
        s++;
    }

    return sign * num;
}
