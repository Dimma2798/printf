#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int simputchar(char c);
int simputs(char *s);
int _printf(const char *format, ...);
int scanint(const char *format, ...);
int simprintf(char *str, const char *format, ...);
void retstr(char *str);
void simrot13(char *str);
void putbuff(char *buffer, const char *str, int *written, int max_length);
void controlstr(const char *format, va_list args, int *count);
int simprint_pointer(const char *format, ...);

#endif
