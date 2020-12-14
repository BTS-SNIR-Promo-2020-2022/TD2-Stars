#include <stdlib.h>
#include <stdio.h>
int x, y, hauteur;

int main()
{
    //printf("Entre une hauteur !\n");
    //scanf("%d", &hauteur);
    hauteur = 10;
    for(y = 0; y<hauteur; y++) {
        for(x = 0; x<hauteur-y; x++) {
            printf("*");
        }
        printf("\n");
    }
}