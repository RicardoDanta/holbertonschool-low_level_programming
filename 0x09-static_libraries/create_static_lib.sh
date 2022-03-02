#!/bin/bash
gcc -Wall -pedantic -Weror -Wextra -c *.c
ar -cr liball.a *.o
