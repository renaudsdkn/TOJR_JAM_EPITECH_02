/*
** EPITECH PROJECT, 2024
** file.c
** File description:
** file.c
*/

#include "my.h"

int display_good_answer_window()
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
        if (osimeh > 0.05)
            sfRenderWindow_close(window);
        sfRenderWindow_display(window);
    }
}

int display_bad_answer()
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
        texture = sfTexture_createFromFile("false.jpg", NULL);
        sprite = sfSprite_create();
        sfSprite_setTexture(sprite, texture, sfTrue);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        if (osimeh > 0.05)
            sfRenderWindow_close(window);
        sfRenderWindow_display(window);
    }
}

int display_second()
{

    sfTexture *texture;
    sfSprite *sprite;

    sfVideoMode mode = {470, 570, 32};
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
        texture = sfTexture_createFromFile("what.jpg", NULL);
        sprite = sfSprite_create();
        sfSprite_setTexture(sprite, texture, sfTrue);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        if (osimeh > 0.05)
            sfRenderWindow_close(window);
        sfRenderWindow_display(window);
    }
}


int display_last()
{

    sfTexture *texture;
    sfSprite *sprite;

    sfVideoMode mode = {250, 250, 72};
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
        texture = sfTexture_createFromFile("youlose.jpg", NULL);
        sprite = sfSprite_create();
        sfSprite_setTexture(sprite, texture, sfTrue);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        if (osimeh > 0.05)
            sfRenderWindow_close(window);
        sfRenderWindow_display(window);
    }
}
