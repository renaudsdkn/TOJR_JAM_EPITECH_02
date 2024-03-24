/*
** EPITECH PROJECT, 2024
** test
** File description:
** test
*/

#include "my.h"

int count_line(char const *str)
{
    int i = 0;
    
    if (*str == '\0')
        return 1;
    for(; *str != '\0'; str++) {
        i+= (!((*str >= 97 && *str <= 122)
        || (*str >= 65 && *str <= 90) || *str == '-')) ?
            1 : 0;
    }
    return i;
}

char *my_strncpy_dup(char const *src, int n)
{
    int i = 0;
    char *dest = malloc(sizeof(char) * (n+1));

    for (n; n > 0; n--) {
        dest[i] = *src;
        src++;
        i++;
    }
    dest[i] = '\0';
    return dest;
}

int count(char *str)
{
    int i = 0;
    int j = 0;

    for (; *str != '\0'; str++) {
        if ((*str >= 97 && *str <= 122)
            || (*str >= 65 && *str <= 90) || *str == '-')
            i++;
        else
            return i;
    }
    return i;
}

char **my_split(char *dest)
{
    int i = 0;
    int x = 0;
    int y = count_line(dest);
    char **tab = malloc(sizeof(char *) * (y + 1));

    for(i; i <= y; i++) {
        x = count(dest);
        tab[i] = my_strncpy_dup(dest, x);
        dest+= x+1;
    }
    tab[i] = NULL;
    return tab;
}
