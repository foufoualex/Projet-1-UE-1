
#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"
#include "actions.h"



void tricroissant_temps()
{

      FILE *fic = fopen("test.csv","r"); // FILE est une structure qui contient le pointeur *fic qui pointe vers un flux  (le fichier)

 int i;
poul_temps t[20];


 if(&fic == NULL) // si le fichier n'est pas ouvert on quitte le programme
    exit(1);

for(i = 0; i < 20; i++)
    {
fscanf(fic, "%d ; %d\n", &t[i].temps, &t[i].poul); // associer les valeurs du fichier aux entiers respectif dans le tableau t de structures poul_temps
    }


//***************************************************************

poul_temps temporaire;

int a, b;

for(a = 0 ; a < 20 ; a++)
  {
        for(b = 0 ; b < 20 ; b++)
            {
            if(t[b].temps > t[b+1].temps)
               {
                  temporaire = t[b];
                  t[b] = t[b+1];
                  t[b+1] = temporaire;
               }
            }

  }

  for(a = 0 ; a < 20 ; a++)
    {
  printf("%d ; %d \n", t[a].temps, t[a].poul);
    }
}


void tridecroissant_temps()
{

      FILE *fic = fopen("test.csv","r"); // FILE est une structure qui contient le pointeur *fic qui pointe vers un flux  (le fichier)

 int i;
poul_temps t[20];


 if(&fic == NULL) // si le fichier n'est pas ouvert on quitte le programme
    exit(1);

for(i = 0; i < 20; i++)
    {
fscanf(fic, "%d ; %d\n", &t[i].temps, &t[i].poul); // associer les valeurs du fichier aux entiers respectif dans le tableau t de structures poul_temps
    }


//***************************************************************

poul_temps temporaire;

int a, b;

for(a = 0 ; a < 20 ; a++)
  {
        for(b = 0 ; b < 20 ; b++)
            {
            if(t[b].temps < t[b+1].temps)
               {
                  temporaire = t[b];
                  t[b] = t[b+1];
                  t[b+1] = temporaire;
               }
            }

  }
  for(a = 1; a < 20 ; a++)
    {
  printf("%d ; %d \n", t[a].temps, t[a].poul);
    }
}


void tricroissant_poul()
{


      FILE *fic = fopen("test.csv","r"); // FILE est une structure qui contient le pointeur *fic qui pointe vers un flux  (le fichier)

 int i;
poul_temps t[20];


 if(&fic == NULL) // si le fichier n'est pas ouvert on quitte le programme
    exit(1);

for(i = 0; i < 20; i++)
    {
fscanf(fic, "%d ; %d\n", &t[i].temps, &t[i].poul); // associer les valeurs du fichier aux entiers respectif dans le tableau t de structures poul_temps
    }


//***************************************************************

poul_temps temporaire;

int a, b;

for(a = 0 ; a < 20 ; a++)
  {
        for(b = 0 ; b < 20 ; b++)
            {
            if(t[b].poul < t[b+1].poul)
               {
                  temporaire = t[b];
                  t[b] = t[b+1];
                  t[b+1] = temporaire;
               }
            }

  }
  for(a = 19 ; a > -1 ; a--)
    {
  printf("%d ; %d \n", t[a].temps, t[a].poul);
    }
}

void tridecroissant_poul()
{

      FILE *fic = fopen("test.csv","r"); // FILE est une structure qui contient le pointeur *fic qui pointe vers un flux  (le fichier)

 int i;
poul_temps t[20];


 if(&fic == NULL) // si le fichier n'est pas ouvert on quitte le programme
    exit(1);

for(i = 0; i < 20; i++)
    {
fscanf(fic, "%d ; %d\n", &t[i].temps, &t[i].poul); // associer les valeurs du fichier aux entiers respectif dans le tableau t de structures poul_temps
    }


//***************************************************************

poul_temps temporaire;

int a, b;

for(a = 0 ; a < 20 ; a++)
  {
        for(b = 0 ; b < 20 ; b++)
            {
            if(t[b].poul < t[b+1].poul)
               {
                  temporaire = t[b];
                  t[b] = t[b+1];
                  t[b+1] = temporaire;
               }
            }

  }
  for(a = 0 ; a < 20 ; a++)
    {
  printf("%d ; %d \n", t[a].temps, t[a].poul);
    }
}

void nombreligne()
{
    int nbligne;
printf("Le nombre de lignes memoires pris par votre programme est de : ");
    nbligne = 20*sizeof(poul_temps);
printf("%d", nbligne);
}


void max_min_poul()
{
  FILE *fic = fopen("test.csv","r"); // FILE est une structure qui contient le pointeur *fic qui pointe vers un flux  (le fichier)

 int i;
poul_temps t[20];


 if(&fic == NULL) // si le fichier n'est pas ouvert on quitte le programme
    exit(1);

for(i = 0; i < 20; i++)
    {
fscanf(fic, "%d ; %d\n", &t[i].temps, &t[i].poul); // associer les valeurs du fichier aux entiers respectif dans le tableau t de structures poul_temps
    }


//***************************************************************

poul_temps temporaire;

int a, b;

for(a = 0 ; a < 20 ; a++)
  {
        for(b = 0 ; b < 20 ; b++)
            {
            if(t[b].poul < t[b+1].poul)
               {
                  temporaire = t[b];
                  t[b] = t[b+1];
                  t[b+1] = temporaire;
               }
            }

  }

    printf("le maximum de poul est : %d \nle minimum de poul est : %d\n",t[1].poul, t[19].poul);

}
