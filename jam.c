/*
** EPITECH PROJECT, 2024
** jam
** File description:
** jam
*/

#include "my.h"

char *opendata(char *filename)
{
    struct stat base;
    char *buff;
    int value;
    int fd;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return NULL;
    stat(filename, &base);
    buff = malloc(sizeof(char) * (base.st_size + 1));
    buff[base.st_size] = '\0';
    value = read(fd, buff, base.st_size);
    return buff;
}

int jam(char *filename)
{
    char *buff = opendata(filename);
    char **tab = my_split(buff);

    if (tab == NULL)
        return 84;
    char c;
    char prenom_mystere[26];
    int j = 0;
    int aer_mystere = 0;

    int Max = 46;
    int Min = 0;
    srand(time(NULL));
    aer_mystere = (rand() % (Max - Min + 1) + Min);

    aer_mystere = (aer_mystere % 2 == 0) ? aer_mystere - 1 : aer_mystere;

    do
    {
        j++;
        printf("Veuillez deviné le Prénom de l'APE ou de l'AER  dont");
        printf(" le Nom commence par : %c\n", tab[aer_mystere - 1][0]);
        scanf("%s", &prenom_mystere);
        if (strcmp(prenom_mystere, tab[aer_mystere]) != 0 && j == 1)
        {
            display_bad_answer();
            printf("Un indice pour vous : Son nom de famille compte ");
            printf("%d lettres\n Il vous", strlen(tab[aer_mystere - 1]));
            printf(" reste encore 2 chances vous pouvez y arriver\n");
        }
        if (strcmp(prenom_mystere, tab[aer_mystere]) != 0 && j == 2)
        {
            display_second();
            printf("Il ne vous reste qu'une seule chance\n");
        }
        if (strcmp(prenom_mystere, tab[aer_mystere]) != 0 && j == 3)
        {

            display_last();
            printf("Vous êtes élève à Epitech et vous ne connaissez pas");
            printf(" l'APE ou l'AER nommé : ");
            printf("%s %s", tab[aer_mystere - 1], tab[aer_mystere]);
            printf("\nVous risquez la TIG!!!!!!!!\n");
            return 0;
        }
        if (strcmp(prenom_mystere, tab[aer_mystere]) == 0)
        {
            display_good_answer_window();
            printf("Felicitations\n");
        }
    } while (strcmp(tab[aer_mystere], prenom_mystere) != 0 && j != 3);
    return 0;
}
int main(int ac, char **av)
{
    if (ac == 1)
    {
        main_1();
    }
    if (ac == 2)
        jam(av[1]);
}
