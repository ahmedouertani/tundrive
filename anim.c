#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include "anim.h"


void animationhero(Ahmed* Ahmed, Back backs)
{
	if(backs.event.type == SDL_KEYDOWN)
	{
		if(backs.event.key.keysym.sym == SDLK_LEFT || backs.event.key.keysym.sym == SDLK_RIGHT || backs.event.key.keysym.sym == SDLK_SPACE)
		{
			if(Ahmed->frame_timer > 0)
			{
				Ahmed->frame_number++;
				SDL_Delay(1);
			if(Ahmed->frame_number == MAXF)
				Ahmed->frame_number = 1;
			}
		else
		Ahmed->frame_timer--;
		SDL_Delay(1);

		}
	}

	if(backs.event.type == SDL_KEYUP)
	{
		if(Ahmed->direction == RIGHT)
		{
			Ahmed->frame_number = 0;
		}
		else if(Ahmed->direction == LEFT)
		{
			Ahmed->frame_number = MAXF-1;
		}
	}
}}





