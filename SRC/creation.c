/*
** EPITECH PROJECT, 2017
** creation.c
** File description:
** my_hunter
*/

#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <stdlib.h>
#include "struct.h"
#include "my.h"

background_t *creation_bg()
{
	background_t* bg = malloc(sizeof(background_t));
	bg->texture = sfTexture_createFromFile("Image/background.png", NULL);
	bg->sprite = sfSprite_create();
	sfSprite_setTexture(bg->sprite, bg->texture, sfTrue);
	return (bg);
}

Duck_t *creation_duck()
{
	Duck_t* duck = malloc(sizeof(Duck_t));
	duck->sound = sfSound_create();
	duck->texture = sfTexture_createFromFile("Image/spritesheet.png", NULL);
	duck->music = sfMusic_createFromFile("Audio/canard.ogg");
	duck->sprite = sfSprite_create();
	duck->clock = sfClock_create();
	duck->rect.top = 0;
	duck->rect.left = 0;
	duck->rect.width = 110;
	duck->rect.height = 110;
	sfSprite_setTexture(duck->sprite, duck->texture, sfTrue);
	return (duck);
}

gun_t *creation_gun()
{
	gun_t* gun = malloc(sizeof(gun_t));
	gun->texture = sfTexture_createFromFile("Image/gun.png", NULL);
	gun->sprite = sfSprite_create();
	gun->rect.top = 30;
	gun->rect.left = 0;
	gun->rect.width = 100;
	gun->rect.height = 100;
	sfSprite_setTexture(gun->sprite, gun->texture, sfTrue);
	return (gun);
}
