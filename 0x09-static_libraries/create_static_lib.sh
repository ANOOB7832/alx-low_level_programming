#!/bin/bash
gcc -Werror -Wextra -pedantic -std=gnu89 -c *.c
ar -rc liball.a *.c
