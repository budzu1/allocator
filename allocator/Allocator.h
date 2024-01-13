#ifndef ALLOCATOR_H
#define ALLOCATOR_H

#include <stddef.h>
#include "Header.h"

int init_allocator();

void* allock(size_t bytes, const char* file, int line);
void dealloc(void* ptr);

void print_stats();
void print_memory_dump;

#endif