/*
** EPITECH PROJECT, 2023
** my.h
** File description:
** my.h
*/

#ifndef MY_H_
    #define MY_H_
    
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <fcntl.h>          
#include <sys/stat.h>
#include <unistd.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>



char *opendata(char *filename);
int jam(char *filename);
int count_line(char const *str);
char *my_strncpy_dup(char const *src, int n);
int count(char *str);
char **my_split(char *dest);
int display_bad_answer();
int display_good_answer_window();
int display_second();
int display_last();
int random_num(int max, int min);
int jam(char *filename);
int main_1(void);


#endif
