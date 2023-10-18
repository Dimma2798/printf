#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <limits.h>

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
int sim_isdigit(int c);
int sim_strlen(char *s);
int sim_number(char *str, params_t *params);
int sim_numb_right_shift(char *str, params_t *params);
int sim_num_left_shift(char *str, params_t *params);
#endif
