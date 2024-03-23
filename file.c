/*
** EPITECH PROJECT, 2024
** file.c
** File description:
** file.c
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include <stdio.h>

void analyse_events(sfRenderWindow *window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

void manage_mouse_click(sfMouseButtonEvent event)
{
    if (event.type == sfEvtMouseButtonPressed)
        printf("Mouse x=%d y=%d\n", event.x, event.y);
}

int main()
{
    sfVideoMode mode = {800, 600, 32};
    sfRenderWindow* window;
    sfEvent event;
    window = sfRenderWindow_create(mode, "SFML window", sfResize | sfClose, NULL);
    if (!window)
        return EXIT_FAILURE;
        while (sfRenderWindow_isOpen(window)) {
        while (sfRenderWindow_pollEvent(window, &event)) {
            analyse_events(window, event);
            manage_mouse_click(event.mouseButton);
        }
        sfRenderWindow_clear(window, sfBlue);
        sfRenderWindow_display(window);
        }
}
