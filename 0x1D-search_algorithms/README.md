# 0x1D. C - Search Algorithms

## OBJECTIVES   
   * What is a search algorithm?   
   * What is a linear search?   
   * What is a binary search?   
   * What is the best search algorithm to use in a given situation?   

## REQUIREMENTS   
   * all files will be compiled on Ubuntu 14.04 LTS
   * files will be compiled with `gcc 4.8.4` using the flags `-Wall` `-Wextra` `-Werror` and `-pedantic`
   * all code should use the `Betty` style
   * no more than 5 functions per file
   * the only standard library function allowed in `printf`   
   * all prototypes should be located in the header file called [search_algos.h](search_algos.h)   

## EXERCISES   

### MANDATORY   

**[0-linear.c](0-linear.c)** - Write a function that searches for a value in an array of integers using the Linear search algorithm   
Prototype: `int linear_search(int *array, size_t size, int value);`   

**[1-binary.c](1-binary.c)** - Write a function that searches for a value in an array of integers using the Binary search algorithm    
Prototype: `int binary_search(int *array, size_t size, int value);`   

**[2-O](2-O)** - What is the `time complexity` (worst case) of a linear search in an array of size `n`?   

**[3-O](3-O)** - What is the `space complexity` (worst case) of an iterative linear search in an array of size `n`?   

**[4-O](4-O)** - What is the `time complexity` (worst case) of a binary search in an array of size `n`?   

**[5-O](5-O)** - What is the `space complexity` (worst case) of an binary search in an array of size `n`? 

**[6-O](6-O)** - What is the `space complexity` of a given algorithm?   

### ADVANCED   

**[100-jump.c](100-jump.c)** - Write a function that searches for a value in an array of integers using the Jump search algorithm    
Prototype: `int jump_search(int *array, size_t size, int value);`   

**[101-O](101-O)** - What is the `time complexity` (worst case) of a  jump search in an array of size `n`, using `step = sqrt(n)`?   

**[102-interpolation.c](102-interpolation.c)** - Write a function that searches for a value in an array of integers using the Interpolation search algorithm   
Prototype: `int interpolation_search(int *array, size_t size, int value);`   

**[103-exponential.c](103-exponential.c)** - Write a function that searches for a value in a sorted array of integers using the Exponential search algorithm   
Prototype: `int exponential_search(int *array, size_t size, int value);`   

**[104-advanced_binary.c](104-advanced_binary.c)** - Write a function that searches for a value in a sorted array of integers using recursive binary search   
Prototype: `int advanced_binary(int *array, size_t size, int value);`   

**[105-jump_list.c](105-jump_list.c)** - Write a function that searches for a value in a sorted list of integers using the Jump search algortihm   
Prototype: `listint_t *jump_list(listint_t *list, size_t size, int value);`   

**[106-linear_skip.c](106-linear_skip.c)** - Write a function that searches for a value in a sorted skip list usting linear search   
Prototype: `skiplist_t *linear_skip(skiplist_t *list, int value);`   

**[107-O](107-O)** - What is the `time complexity` (average case) of a jump search in a singly linked list of size `n` using `step = sqrt(n)`?   

**[108-O](108-O)** - What is the `time complexity` (average case) of a jump search in a skip list of size `n` with an express lane using `step = sqrt(n)?   
