//
// Created by sarra on 22/10/2024.
//
//le nombre de joueurs est entré et chaque joueur entre son nom/
#include <stdio.h>
#define NB_CASES 100
void joueurs(int n) {
    int i;
    int score[NB_CASES];
    char nom[NB_CASES];
    for(i=0;i<n;i++) {
        printf("nom du joueur %d \n:",i+1);
        scanf("%s",nom[i]);
        }
    i=0;
    for(i=0;i<NB_CASES;i++) {
        printf("Score du joueur%d \n:",i+1);
    }
}


