#include <stdio.h>
#include "align.h"

int main()
{
    size_t a = 8;
    size_t size = align(a);
    printf("%ld\n", size);
    return 0;
}