#include <stddef.h>
#include <stdlib.h>

void* tda_alloc(size_t x, size_t y, size_t size) {
    return calloc(x * y, size);
}

void tda_dealloc(void** ptr) {
    if (ptr != NULL && *ptr != NULL) {
        free(*ptr);
        *ptr = NULL;
    }
}