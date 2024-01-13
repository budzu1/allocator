#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <pthread.h>

#include "Allocator.h"

// mutex
static pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

static Header* start_head = NULL;

static int calls = 0;
static size_t total_memory = 0;
static size_t peak_usage = 0;
static size_t avg_alloc_bytes = 0;
static int sbrk_calls = 0;

