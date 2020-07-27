/*
** EPITECH PROJECT, 2017
** struct.h
** File description:
** c_graphical
*/

#ifndef STRUCT_H
#define STRUCT_H

typedef struct background {
	sfTexture *texture;
	sfSprite *sprite;
}background_t;

typedef struct Duck {
	sfSound* sound;
	sfEvent event;
	sfMusic* music;
	sfRenderWindow *win;
	sfTexture *texture;
	sfSprite *sprite;
	sfClock *clock;
	sfIntRect rect;
	sfVector2f pos;
	sfVector2f dep;
}Duck_t;

typedef struct gun {
	sfTexture *texture;
	sfSprite *sprite;
	sfIntRect rect;
	sfClock *clock;
}gun_t;

#endif

