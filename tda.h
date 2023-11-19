#pragma once

#include <stddef.h>
#include <stdlib.h>

/**
 * @brief Allocates memory for a two-dimensional array.
 *
 * @param x     Number of rows in the array.
 * @param y     Number of columns in the array.
 * @param size  Size of each element in the array.
 *
 * @return A pointer to the allocated memory for the two-dimensional array,
 *         or NULL if the allocation faills.
 *
 * @note The allocated memory must be freed using the appropriate deallocation
 *       functions when it is no longer needed to avoid memory leaks.
 *
 * Example usage:
 * @code
 * int** myArray = (int**)tda_alloc(5, 2, sizeof(int));
 * // ... Use the dynamically allocated array ...
 * tda_dealloc(&myArray);
 * @endcode
 */
void* tda_alloc(size_t x, size_t y, size_t size);

/**
 * @brief Deallocates memory for a two-dimensional array.
 *
 * @param ptr   A pointer to the memory to be deallocated.
 *
 * Example usage:
 * @code
 * int** myArray = (int**)tda_alloc(5, 2, sizeof(int));
 * // ... Use the dynamically allocated array ...
 * tda_dealloc(&myArray);
 * @endcode
 */
void tda_dealloc(void** ptr);