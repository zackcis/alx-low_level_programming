#include <stdarg.h>
#ifndef MAIN_H /* You may change this (e.g. main.h becomes MAIN_H)*/
#define MAIN_H /* You may change this (e.g. main.h becomes MAIN_H)*/
int _putchar(char c); /* For testing. Don't delete */
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void printer(const char * const format, unsigned int i, va_list ls);
#endif
