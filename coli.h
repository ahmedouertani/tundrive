#ifndef COLLISION_H_
#define COLLISION_H_
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h> 
#include "SDL/SDL_mixer.h"

struct Perso
{
  SDL_Surface *image[2];
  SDL_Surface *Hit;
  SDL_Surface *imageActuel;
  SDL_Rect position;
  int fram;
  int direction;

};typedef struct Perso Person;

int collision_trigo(SDL_Surface *perso  ,SDL_Surface *enemie,SDL_Rect posp,SDL_Rect pose );

#endif
