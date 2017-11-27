#include <stdio.h>

#define A_Unused __attribute__((unused))

int main(A_Unused int argc, const char *argv[])
{
    while (*++argv)
        puts(*argv);
    return 0;
}
