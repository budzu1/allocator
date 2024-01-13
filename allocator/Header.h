#ifndef HEADER
#define HEADER

#include <stddef.h>
#include <stdbool.h>
#include "defs.h"

typedef struct Header
{
    size_t size;
    bool used;
    int crc;
    const char* file;
    int line;
    struct Header* next;
    word_t data[1];
} Header;

#endif
