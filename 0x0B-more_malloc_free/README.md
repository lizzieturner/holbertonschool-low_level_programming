This project contains 6 C functions pertaining to malloc, calloc, realloc, and free.

MANDATORY EXERCISES:

0. Allocate memory using malloc
   * if malloc fails, the malloc_checked function should cause normal process termination with a status value of 98
1. Concatenate two strings
   * returned pointer should point to a newly allocated space in memory, which contains s1, followed by the first n bytes of s2 
2. Allocate memory, using malloc, for an array of a certain number of elements of a certain size
3. Create an array of integers
   * array should contain all integers from min to max, in numerical order
   * if min > max, return NULL

ADVANCED EXERCISES:

4. Reallocate a memory block
   *  contents should be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes
5. Multiply two positive numbers