#!/bin/bash
gcc -Wall -std=gnu89 -Werror -Wextra -c *.c && ar -rc liball.a *.o
