#!/bin/bash
gcc -c -Wall -Werror -Wextra -pedantic -fPIC *.c
gcc -shared -o libholberton.so *.o
