#ifndef _MAIN_H_
#define _MAIN_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int get_size(void);
int get_index(char *name);
int get_index_p(char *name, unsigned int *index);
void free_env();
int initial_env(void);
int delete_env(char *name);
int add_env(char *name, char *value);
int set_env(char *name, char *value, int overwrite);
void print_env();

#endif
