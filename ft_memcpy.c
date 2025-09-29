#include <stdlib.h>
char *memcpy(char *a, const char  *b, size_t n)
{
    int i = 0;
    while(i < n)
    {
        a[i] = b[i];
        i++;
    }
    return a;
}