#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


#define BUFF_SIZE 1024
void print_buffer(char buffer[], int *buff_ind); 
int _printf(const char *format, ...);
int print_string(char *str);
int print_char(char c);
int print_int(int num);
int _strlen(char *s);
#endif /* MAIN_H */
