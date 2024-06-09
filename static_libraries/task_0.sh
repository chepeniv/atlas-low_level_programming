#!/bin/bash
gcc -c *.c
ls
ar rc libmy.a *.o
ls
ar -t libmy.a
nm libmy.a
