#include <stdio.h>
#include "joueurs.h"
int main(void) {
    int n;
    printf("Nombre de joueurs(2 ou 4)\n");
    scanf("%d",&n);
    while(n!=2 && n!=4) {
        printf("Invalide! Entrer 2 ou 4\n");
        scanf("%d",&n);
    }
    joueurs(n);
    return 0;
}
