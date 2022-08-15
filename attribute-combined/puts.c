#include <stdio.h>

#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 202000L
#define A_Unused [[maybe_unused]]
#elif defined(__GNUC__)
#define A_Unused __attribute__((unused))
#else
#define A_Unused
#endif

int main(A_Unused int argc, const char *argv[])
{
    while (*++argv)
        puts(*argv);
    return 0;
}
