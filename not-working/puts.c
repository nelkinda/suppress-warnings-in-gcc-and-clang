#include <stdio.h>

int main(int argc, const char *argv[])
{
    while (*++argv)
        puts(*argv);
    return 0;
}
