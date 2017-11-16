#include <stdio.h>
#include <stdlib.h>
#include "menu.h"

int menu_traitement()  // déclaration du menu
{
  int choix_traitement = 0;  // choix traitement va retourner la valeur nécéssaire pour choisir l'action qui sera effectuée dans action.c
  int choix_tempspoul = 0;  // entier de choix de temps ou de poul pour les choix 2 et 3 du menu

  printf("\n\n         **********\n\nComment souhaitez-vous afficher vos valeurs de frequences cardiaques ?\n\n");
  printf(" 1 : afficher les donnees dans l'ordre du fichier.\n");
  printf(" 2 : afficher les donnees dans l'ordre croissant de temps/poul.\n");
  printf(" 3 : afficher les donnees dans l'ordre decroissant de temps/poul.\n");
  printf(" 4 : afficher la moyenne de poul.\n");
  printf(" 5 : afficher le nombre de lignes en memoire.\n");
  printf(" 6 : Rechercher le max et min de poul.\n\n");
  printf(" Rentrez le numero de votre choix :\n\n");

scanf("%d", &choix_traitement);

while(choix_traitement < 1 || choix_traitement > 6)
{
    printf("Choix inexistant, veuillez rentrer un autre choix :\n");       // boucle qui va redemander un choix de traitement à l'utilisateur tant que celui ci n'est pas valide
    scanf("%d", &choix_traitement);
}

if(choix_traitement == 2)
{
  printf(" 1 : Afficher en fonction du temps \n 2 : Afficher en fonction du poul \n");
  scanf("%d", &choix_tempspoul);

if(choix_tempspoul == 1)    // Le programme retourne 7 pour trier dans lordre croissant en fonction du temps
{
    choix_traitement = 7;
}
else if(choix_tempspoul == 2)   // Le programme retourne 8 pour trier dans lordre croissant en fonction du temps
{
    choix_traitement = 8;
}
}

if(choix_traitement == 3)
{
  printf(" 1 : Afficher en fonction du temps \n 2 : Afficher en fonction du poul \n");
  scanf("%d", &choix_tempspoul);

if(choix_tempspoul == 1)    // Le programme retourne 9 pour trier dans lordre décroissant en fonction du temps
{
    choix_traitement = 9;
}
else if(choix_tempspoul == 2)   // Le programme retourne 10 pour trier dans lordre décroissant en fonction du temps
{
    choix_traitement = 10;

}
}

printf("%d", choix_traitement);
    return choix_traitement;
}

