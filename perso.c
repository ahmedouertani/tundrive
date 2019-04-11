#include <stdlib.h>
#include <stdio.h>
#include "SDL/SDL_mixer.h"
#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL.h>
#include <SDL/SDL_image.h> 
int main()
{int continuer=1;
SDL_Surface *perso,*screen;
SDL_Rect position;
perso=IMG_Load("anim.png");
position.x=0;
position.y=0;
screen = SDL_SetVideoMode(661,443, 32, SDL_HWSURFACE);
while(continuer)
{SDL_BlitSurface(perso, NULL, screen,&position);
SDL_Flip(screen);
}
return 0;
}

