#include <stdio.h>

#include "askname.h"

int main(int argc, char **argv)
{
    char first[240], last[240];

    askname(first, last);

    printf("Hello, %s %s!\n", first, last);
    return 0;
}
