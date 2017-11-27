#include <stdio.h>

int main(__attribute__((unused)) int argc, const char *argv[])
{
    while (*++argv)
        puts(*argv);
    return 0;
}
