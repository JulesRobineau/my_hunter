/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** task02
*/

#ifndef MY_H
# define MY_H

void	duck_exit(Duck_t* duck);
void	touch_duck(Duck_t* duck, sfEvent event);
void	animation_duck(Duck_t* duck);
background_t	*creation_bg();
Duck_t	*creation_duck();
gun_t	*creation_gun();
void	close_window(Duck_t* duck);
void	animation_gun(gun_t* gun);
#endif
