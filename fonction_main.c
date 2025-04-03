#include"fonction.h"

//contrôle s'il y a eu victoire d'un joueur ou match nul renvoie un message et met fin au jeu
int departage_jeuMA (char plateau[][TAILLE],joueurs joueur[])
{
    int vic=0;
    if ((plateau[0][0]=='X' && plateau[0][1]=='X' && plateau[0][2]=='X') || (plateau[1][0]=='X' && plateau[1][1]=='X' &&
        plateau[1][2]=='X') || (plateau[2][0]=='X' && plateau[2][1]=='X' && plateau[2][2]=='X') || (plateau[0][0]=='X' && plateau[1][0]=='X' && 
        plateau[2][0]=='X') || (plateau[0][1]=='X' && plateau[1][1]=='X' && plateau[2][1]=='X') || (plateau[0][2]=='X' && plateau[1][2]=='X' &&
        plateau[2][2]=='X') || (plateau[0][0]=='X' && plateau[1][1]=='X' && plateau[2][2]=='X') || (plateau[0][2]=='X' && plateau[1][1]=='X' &&
        plateau[2][0]=='X'))
    {
        vic=1;
        return vic;

    }else if ((plateau[0][0]=='O' && plateau[0][1]=='O' && plateau[0][2]=='O') || (plateau[1][0]=='O' && plateau[1][1]=='O' &&
        plateau[1][2]=='O') || (plateau[2][0]=='O' && plateau[2][1]=='O' && plateau[2][2]=='O') || (plateau[0][0]=='O' && plateau[1][0]=='O' && 
        plateau[2][0]=='O') || (plateau[0][1]=='O' && plateau[1][1]=='O' && plateau[2][1]=='O') || (plateau[0][2]=='O' && plateau[1][2]=='O' &&
        plateau[2][2]=='O') || (plateau[0][0]=='O' && plateau[1][1]=='O' && plateau[2][2]=='O') || (plateau[0][2]=='O' && plateau[1][1]=='O' &&
        plateau[2][0]=='O'))
    {
        vic=1;
        return vic;
    }else if (match_nulMA(plateau)==9)
    {
        vic=-1;
        return vic;
    }
}

char init_plateauMA(char plateau[][TAILLE]){

    for (int iMA = 0; iMA < 3; iMA++)
    {
        for (int jMA = 0; jMA < 3; jMA++)
        {
            plateau[iMA][jMA]='-';
        }
    }
    return plateau[TAILLE][TAILLE];
}

void afficher_plateauMA(char plateau[][TAILLE])
{
    for (int iMA = 0; iMA < 3; iMA++)
    {
        for (int jMA = 0; jMA < 3; jMA++)
        {
            printf(" \t%c",plateau[iMA][jMA]);    
        }
        printf("\n");
    }
}

int match_nulMA(char plateau[][TAILLE])
{
    int nul=0;
    for (int iMA = 0; iMA < 3; iMA++)
    {
        for (int jMA = 0; jMA < 3; jMA++)
        {
            if (plateau[iMA][jMA]!='-')
                nul++;
        }
    }
    return nul;
}