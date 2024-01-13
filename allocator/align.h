#ifndef ALIGN
#define ALIGN

#include <stddef.h>
#include "defs.h"

inline size_t align(size_t n)
{
    return (n + sizeof(word_t) - 1) & ~(sizeof(word_t) - 1);
}

#endif