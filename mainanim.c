#include <stdlib.h>
#include <stdio.h>
#include <SDL/SDL_image.h>
#include <SDL/SDL.h>
#include <SDL/SDL_ttf.h>
#include <SDL/SDL_mixer.h>
#include <time.h>
struct Perso
{
  SDL_Surface *image[2];
  SDL_Surface *Hit;
  SDL_Surface *imageActuel;
  SDL_Rect position0;
  SDL_Rect position;
  int fram;
  int direction;
}perso;

Person InitPerson(Person Personne,int x,int y)
{
  Personne.image[0]=IMG_Load("ahmed1.png");
  Personne.image[1]=IMG_Load("ahmed2.png");
  Personne.image[2]=IMG_Load("ahmed3.png");
  Personne.imageActuel=Personne.image[0];
  Personne.position.x=x;
  Personne.position.y=y;
  Personne.fram=0;
  Personne.direction=0;
  return Personne;
}
void  Afficherperso(person personnage,SDL_Surface *screen)
{
  SDL_BlitSurface(personnage.imageActuel,NULL,screen,&personnage.position);
}
perso Animateperso(person personnage,int stat)
{
  if (personnage.fram==2) {
    personnage.fram=0;
  }
  else
 personnage.fram++;
  personnage.imageActuel=personnage.image[personnage.fram];
  if(stat==1)
    personnage.imageActuel=personnage.Hit;
  return personnage;

}
perso Moveperso(person personnage,SDL_Rect personnagee,int *stat)
{

int distance;

  if(personnage.position.x>=personnagee.x)
    distance=personnage.position.x-personnagee.x;
  else
    distance=personnagee.x-personnage.position.x;
if(distance<50)*stat=1;
else *stat=0;
    if(distance<200)
      {
        if(personnage.position.x>=personnagee.x)
          personnage.direction=0;
        else
         personnage.direction=1;
      }

      else
    {  if(personnage.positionO.x+100==personnage.position.x)
          personnage.direction=0;

      if(personnage.positionO.x-100==personnage.position.x)

       personnage.direction=1;}


      if(personnage.direction==1)
      {
        personnage.position.x+=5;
      }
      if(personnage.direction==0)
      {
        personnage.position.x-=5;
      }


  return personnage;
}
int main(int argc, char *argv[])
{SDL_Surface *ecran;
  SDL_Surface *personnagee =NULL;
   SDL_Init(SDL_INIT_VIDEO);
   perso e;
e=Initperso(e,0,250);
ecran = SDL_SetVideoMode(800, 600,32,SDL_HWSURFACE || SDL_DOUBLEBUF||SDL_FULLSCREEN );
	SDL_Rect positiondetective;

positiondetective.y=250;
positiondetective.x=0;

    SDL_Event event;
    int continuer =4,a;
    SDL_WM_SetCaption("jeux", NULL);
personnagee=IMG_Load("perso/perso 1.png");



    while (continuer)
    { SDL_PollEvent(&event);


      
        switch(event.type)
        {
            case SDL_QUIT:
                continuer = 0;
                break;
		case SDL_KEYUP:
break;
            case SDL_KEYDOWN :

                 switch(event.key.keysym.sym)
                {


                    case SDLK_RIGHT:
positiondetective.x+=30;
personnagee=IMG_Load("perso/perso 1.png");
personnagee=IMG_Load("perso/perso 2.png");
personnagee=IMG_Load("perso/perso 3.png");
personnagee=IMG_Load("perso/perso 4.png");
SDL_Flip(ecran);

                        break;
                    case SDLK_LEFT :

positiondetective.x-=30;
personnagee=IMG_Load("perso/perso 5.png");
personnagee=IMG_Load("perso/perso 6.png");
personnagee=IMG_Load("perso/perso 7.png");
personnagee=IMG_Load("perso/perso 8.png");
SDL_Flip(ecran);
                    break;




                }
                break;


        }
SDL_Delay(90);

e=Moveperso(e,positiondetective,&a);
e=Animateperso(e,a);
 SDL_FillRect(ecran, NULL, SDL_MapRGB(ecran->format, 0, 0, 0));

 SDL_BlitSurface(personnagee,NULL,ecran, &positiondetective);
  Afficherperso(e,ecran);
        SDL_Flip(ecran);
    }

    SDL_FreeSurface(personnagee);

    SDL_Quit();

    return EXIT_SUCCESS;


}
