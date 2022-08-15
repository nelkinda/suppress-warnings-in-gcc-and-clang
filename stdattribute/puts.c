#include <stdio.h>

int main([[maybe_unused]] int argc, const char *argv[])
{
    while (*++argv)
        puts(*argv);
    return 0;
}
