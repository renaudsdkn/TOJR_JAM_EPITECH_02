/*
** EPITECH PROJECT, 2024
** mysterious.c
** File description:
** Le nombre mysrère
*/
#include <stdlib.h>
#include <stdio.h> 
#include <time.h>
#include <string.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <SFML/System/Export.h>
#include <SFML/System/Time.h>
#include <SFML/System/Types.h>
#include "my.h"

/*int display_good_answer_window()
{

    sfTexture *texture;
    sfSprite *sprite;

    sfVideoMode mode = {700, 700, 32};
    sfRenderWindow *window;
    sfEvent event;
        sfClock *the_time = sfClock_create();
      
        
    
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    while (sfRenderWindow_isOpen(window))
    {
    
   
       sfTime giza = sfClock_getElapsedTime(the_time);
      
    float osimeh = giza.microseconds / 10000000.0;
        sfRenderWindow_clear(window, sfBlack);
        texture = sfTexture_createFromFile("the_file.jpg", NULL);
        sprite = sfSprite_create();
        sfSprite_setTexture(sprite, texture, sfTrue);
        sfRenderWindow_drawSprite(window, sprite, NULL);
            if (osimeh > 0.5)
                sfRenderWindow_close(window);
        sfRenderWindow_display(window);
    }
}

int display_bad_answer()
{

    sfTexture *texture;
    sfSprite *sprite;

    sfVideoMode mode = {900, 900, 32};
    sfRenderWindow *window;
    sfEvent event;
        sfClock *the_time = sfClock_create();
      
        
    
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
    while (sfRenderWindow_isOpen(window))
    {
    
   
       sfTime giza = sfClock_getElapsedTime(the_time);
      
    float osimeh = giza.microseconds / 10000000.0;
        sfRenderWindow_clear(window, sfBlack);
        texture = sfTexture_createFromFile("sorry.jpg", NULL);
        sprite = sfSprite_create();
        sfSprite_setTexture(sprite, texture, sfTrue);
        sfRenderWindow_drawSprite(window, sprite, NULL);
            if (osimeh > 0.5)
                sfRenderWindow_close(window);
        sfRenderWindow_display(window);
    }
}*/

int random_num(int max, int min)
{
    srand(time(NULL));
    return (rand() % (max - min + 1) + min);
}

int main_1(void)
{
    printf("Welcome\n");
    printf("Veuillez choisir votre difficulté de jeu\nFacile = 1\nMoyen = 2\nDifficile = 3\n");
    int level;
    int nb;
    scanf("%d",&level);
    printf("FIND A NUMBER\n");
    if (level == 1)
        nb = random_num(10, 0);
    if (level == 2)
	nb = random_num(100, 0);
    if (level == 3)
	nb = random_num(1000, 0);
    int i = 2;
    if (nb < 0)
        nb = nb * (-1);
    printf("%d\n", nb);
    int choix;
    do{
        scanf("%d",&choix);
        if (choix < nb){
            printf("Plus grand\n");
            if (i >= 1)
                printf("T'as encore %d chances\n", i);
            else
                printf("T'as plus de chances\n");
            i--;
        }
        if (choix > nb){
            printf("Plus petit\n");
            if (i >= 1)
                printf("T'as encore %d chances\n", i);
            else {
                //display_bad_answer();
                printf("T'as plus de chances\n");
            }
            i--;
        }
        if (nb == choix) {
            printf("very good");
           // display_good_answer_window();
        }
    }
    while(choix != nb && i >= 0);
}
