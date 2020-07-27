/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** my_hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include "struct.h"
#include "my.h"

void display(Duck_t* duck, background_t* bg, gun_t* gun)
{
	sfVector2f pos = {900, 600};

	animation_duck(duck);
	sfSprite_setPosition(gun->sprite, pos);
	close_window(duck);
	sfSprite_setTextureRect(duck->sprite, duck->rect);
	sfSprite_setTextureRect(gun->sprite, gun->rect);
	sfRenderWindow_drawSprite(duck->win, bg->sprite, NULL);
	sfRenderWindow_drawSprite(duck->win, duck->sprite, NULL);
	sfRenderWindow_drawSprite(duck->win, gun->sprite, NULL);
	sfRenderWindow_display(duck->win);
}

void audio_duck(Duck_t* duck)
{
	sfMusic_play(duck->music);
	sfMusic_setLoop(duck->music, sfTrue);
}

void destroy_duck(Duck_t* duck, background_t* bg, gun_t* gun)
{
	sfMusic_destroy(duck->music);
	sfSound_destroy(duck->sound);
	sfTexture_destroy(bg->texture);
	sfTexture_destroy(gun->texture);
	sfTexture_destroy(duck->texture);
	sfSprite_destroy(bg->sprite);
	sfSprite_destroy(gun->sprite);
	sfSprite_destroy(duck->sprite);
	sfRenderWindow_destroy(duck->win);
}

void close_window(Duck_t* duck)
{
	gun_t* gun;
	sfEvent event;
	while (sfRenderWindow_pollEvent(duck->win, &event)) {
		if ((sfKeyboard_isKeyPressed(sfKeyEscape)
		|| (event.type == sfEvtClosed)))
			sfRenderWindow_close(duck->win);
		if (sfMouse_isButtonPressed(sfMouseLeft))
			touch_duck(duck, event);
	}
}

int	main(int ac, char **av)
{
	sfVideoMode mode = {1200, 700, 32};
	Duck_t* duck = creation_duck();
	background_t* bg = creation_bg();
	gun_t* gun = creation_gun();
	sfVector2f pos = {0, 500};

	duck->win = sfRenderWindow_create(mode, "My Hunter", sfClose, NULL);
	audio_duck(duck);
	while (sfRenderWindow_isOpen(duck->win)) {
		display(duck, bg, gun);
	}
	destroy_duck(duck, bg, gun);
	return (0);
}
