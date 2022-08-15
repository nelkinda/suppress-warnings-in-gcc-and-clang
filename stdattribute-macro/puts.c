#include <stdio.h>

#define A_Unused [[maybe_unused]]

int main(A_Unused int argc, const char *argv[])
{
    while (*++argv)
        puts(*argv);
    return 0;
}
