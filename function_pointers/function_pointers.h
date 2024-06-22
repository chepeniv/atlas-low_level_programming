#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
void array_iterator(int *array, size_t size, void (*action)(int));
