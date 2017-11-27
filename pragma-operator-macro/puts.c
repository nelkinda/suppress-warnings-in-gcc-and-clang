#include <stdio.h>

#define A_IgnoreUnused \
    _Pragma("GCC diagnostic push") \
    _Pragma("GCC diagnostic ignored \"-Wunused-parameter\"") \

#define A_Pop \
    _Pragma("GCC diagnostic pop") \

A_IgnoreUnused
int main(int argc, const char *argv[])
{
    while (*++argv)
        puts(*argv);
    return 0;
}
A_Pop
