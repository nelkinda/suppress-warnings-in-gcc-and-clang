#include <stdio.h>

#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wunused-parameter"
int main(int argc, const char *argv[])
{
    while (*++argv)
        puts(*argv);
    return 0;
}
#pragma GCC diagnostic pop
