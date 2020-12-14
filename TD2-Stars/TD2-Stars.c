#include <stdlib.h>
#include <stdio.h>
int x, y, hauteur;

int main()
{
    printf("Entre une hauteur !\n");
    scanf("%d", &hauteur);
    for (y = 1; y <= hauteur; y++) {
        for (x = 1; x <= y; x++) {
            printf("*");
        }
        printf("\n");
    }
}