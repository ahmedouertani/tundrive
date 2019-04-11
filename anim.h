#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL_mixer.h>
#include <SDL/SDL_ttf.h>
typedef struct Back Back;
struct Back
{
	  SDL_Surface *screen;
    SDL_Event event ;

	//fond
	SDL_Surface *fond ;
	SDL_Rect posFond;

  //fond noir
  SDL_Surface* backg_collision;
  SDL_Surface* backg;
  SDL_Rect camera;

};
typedef struct 	Ahmed Ahmed;
struct Ahmed
{

SDL_Surface *sprite;

/* Coordonnées du personnage principale */
Sint16 x , y ;
Sint16 Ysaut;

/* Variables utiles pour l'animation */
int frame_timer, frame_number,timee;
int etat  , direction ;

float x1 , x2 , x3 , x4 , x5 , x6 , x7 , x8 , x9 , x10 , x11 , x12 , x13 , x14 , x15 , x16 ;  //points de verification de collision parfaite
float y1 , y2 , y3 , y4 , y5 , y6 , y7 , y8 , y9 , y10 , y11 , y12 , y13 , y14 , y15 , y16 ;  // points de verification de collision parfaite

int jump, ground,a,b,c,win;
int PLAYER_SPEED ;
float vies ;


