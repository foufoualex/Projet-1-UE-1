#include <stdio.h>

#include "menu.h"
#include "GenerationCode.h"

// **contient la fonction main et lance le menu en console**


int main()
{
    int modeAffichage = -1;
    int nbLedsAllumees = -1;
    int ledAllumee = -1;
    choixMenu(&modeAffichage, &nbLedsAllumees, &ledAllumee);
    generateHeader(&modeAffichage, &nbLedsAllumees, &ledAllumee);
    getchar();
    return 0;
}