#include <stdlib.h>
#include <stdio.h>
int x, y;
int hauteur = 10;

int main()
{
    for (y = 1; y <= hauteur; y++) {
        for (x = 1; x <= y; y++) {
            printf("*");
        }
        printf("\n");
    }
}