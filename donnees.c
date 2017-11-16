#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

void lirefichier()
{

    FILE *fic = fopen("test.csv","r"); // FILE est une structure qui contient le pointeur *fic qui pointe vers un flux  (le fichier)

typedef struct poul_temps poul_temps;

struct poul_temps
{
    int temps;
    int poul; // on declare les deux tableaux d'entier présent dans la structure poul_temps

};
 int i;
poul_temps t[20];


 if(&fic == NULL) // si le fichier n'est pas ouvert on quitte le programme
    exit(1);

for(i = 0; i < 20; i++)
    {
fscanf(fic, "%d ; %d\n", &t[i].temps, &t[i].poul); // associer les valeurs du fichier aux entiers respectif dans le tableau t de structures poul_temps

printf("poul : %d    ", t[i].poul);  // test pour verifier que les variables ont bien pris la valeur de poul et de temps
printf("temps : %d\n", t[i].temps);

}


    fclose(fic);

}
