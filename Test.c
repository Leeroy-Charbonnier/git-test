#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Fonction.h"


char caracter[]="Coucou mon chou";



int main()
{
    Hello2();
    printf("Test de fin de modification\n");
    
    for(int i=0;i<15;i++)
    {
        printf("%c", caracter[i]);
    }
    printf("\n");
    return 0;
}

