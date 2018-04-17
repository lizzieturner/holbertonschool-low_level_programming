# 0x17 - Dynamic Libraries

## OBJECTIVES  
   * What is a dynamic library, how does it work, how to create one, and how to use it
   * What is the environment variable $LD_LIBRARY_PATH and how to use it
   * What are the differences between static and shared libraries
   * Basic usage nm, ldd, ldconfig

## REQUIREMENTS  
   * allowed editors: `vi`, `vim`, `emacs`
   * allowed standard library functions: `malloc`, `free`, `printf`, `exit`
   * compiled on Ubuntu 14.04 LTS
   * compiled with `gcc 4.8.4` with the flags `-Wall`, `-Wextra`, `-Werror`, and `pedantic`
   * the prototypes of all functions and the function `_putchar` should be included in a header file called `holberton.h`

## MANDATORY  
**[libholberton.so](libholberton.so)** - Create the dynamic library `libholberton.so` containing the functions listed below:
```
int _putchar(char c);
int _islower(int c);
int _isalpha(int c);
int _abs(int n);
int _isupper(int c);
int _isdigit(int c);
int _strlen(char *s);
void _puts(char *s);
char *_strcpy(char *dest, char *src);
int _atoi(char *s);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
```   
**[1-create_dynamic_lib.sh](1-create_dynamic_lib.sh)** - Create a script that creates a dynamic library called `liball.so` from all the `.c` files that are in the current directory.  
**[BLOG POST: Dynamic Libraries](https://t.co/OfsVzSMf5r)** - Write a blog post describing the differences between static and dynamic libraries. It should cover:  
      * Why using libraries in general
      * How do they work
      * How to create them (Linux only)
      * How to use them (Linux only)
      * What are the differences between static and dynamic libraries
      * What are the advantages and drawbacks of each of them


## ADVANCED  
**[100-operations.so](100-operations.so)** - Create a dynamic library that contains C functions that can be called from Python.  
**[101-make_me_win.sh](101-make_me_win.sh)** - Use [this code](https://github.com/holbertonschool/0x17.c) to win the jackpot every time! (See the repository for more information)