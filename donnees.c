#include <stdio.h>
#include <stdlib.h>
#include "donnees.h"

int main(void)
{

    FILE *fic = fopen("test.csv","r"); // FILE est une structure qui contient le pointeur *fic qui pointe vers un flux  (le fichier)



typedef struct poul_temps poul_temps;
struct poul_temps;
{
    int temps;
    int poul;

};
 int i;
 int temps[20];
 int poul[20];    // on declare les deux entiers présents dans le fichier csv


 if(fic == NULL) // si le fichier n'est pas ouvert on quitte le programme
    exit(1);

for(i = 0; i < 20; i++)
    {
   fscanf(fic, "%d ; %d\n", &poul_temps.temps[i], &poul_temps.poul[i]);

printf("poul : %d    ", poul[i]);  // test pour verifier que les variables ont bien pris la valeur de poul et de temps
printf("temps : %d\n", temps[i]);

}


    fclose(fic);
return 0;
}
