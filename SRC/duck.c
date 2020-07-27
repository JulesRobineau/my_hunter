/*
** EPITECH PROJECT, 2017
** duck.c
** File description:
** my_hunter
*/
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

void duck_exit(Duck_t* duck)
{
	if (sfSprite_getPosition(duck->sprite).x > 1200) {
		duck->pos.y = rand() % 450;
		sfSprite_setPosition(duck->sprite, duck->pos);
	}
}

void touch_duck(Duck_t* duck, sfEvent event)
{
	if ((event.mouseButton.x >= sfSprite_getPosition(duck->sprite).x
	&& event.mouseButton.x <= sfSprite_getPosition(duck->sprite).x + 110)
	&& (event.mouseButton.y >= sfSprite_getPosition(duck->sprite).y
	&& event.mouseButton.y <= sfSprite_getPosition(duck->sprite).y + 110)) {
		duck->pos.y = rand() % 450;
		sfSprite_setPosition(duck->sprite, duck->pos);
	}
}

void animation_duck(Duck_t* duck)
{
	sfTime time = sfClock_getElapsedTime(duck->clock);
	float seconds = time.microseconds / 1000000.0;
	duck->dep.x = 0.5;
	duck->dep.y = 0;
	duck->pos.x = -150;
	duck->pos.y = 225;

	if (seconds > 0.25) {
		if (duck->rect.left == 220)
			duck->rect.left = 0;
		else
			duck->rect.left += 110;
		sfClock_restart(duck->clock);
	}
	sfSprite_move(duck->sprite, duck->dep);
	close_window(duck);
	duck_exit(duck);
}
