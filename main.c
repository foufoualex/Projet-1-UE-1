#include <stdio.h>
#include <stdlib.h>
#include "donnees.c"
#include "menu.c"
#include "actions.c"
#include "donnees.h"
int main()
{
int choix;  // choix pour associer le menutraitement à une valeur qui pourra etre testée conditionellement dans les if

lirefichier(); // lecture du fichier


choix = menu_traitement();  // choix prend la valeur de retour du menu



if (choix == 1)    // le if va rediriger les choix vers la fonction de traitement associée à ce choix
{
tricroissant_temps();
}
if (choix == 7)
{
tricroissant_temps();
}
if (choix == 8)
{
tricroissant_poul();
}
if (choix == 9)
{
tridecroissant_temps();
}
if (choix == 10)
{
tridecroissant_poul();
}
if (choix == 5)
{
nombreligne();
}
if (choix == 6)
{
  max_min_poul();
}
else
{
printf("");  // fin du programme si l'utilisateur rentre un mauvais choix
}

 return 0;

}
