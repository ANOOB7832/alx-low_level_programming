#!/bin/bash
gcc -Werror -Wextra -pedantic -c *.c
ar -rc liball.a *.o
