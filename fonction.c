#include"fonction.h"


int main(){

    char plateauMA[TAILLE][TAILLE];
    int joueur_actuelMA=0,
        xMA,yMA;
    joueurs joueurMA[NBRE_JOUEUR];

    //page d'accueil
    printf("\n  ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++");
    printf("\n++++++++++++++++     MONDE TiC_TAC_TOE ++++++++++++++");
    printf("\n  +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\n");

    //informations des joueurs
    for (int iMA = 0; iMA < NBRE_JOUEUR; iMA++)
    {
        printf("\nEntrez le nom du joueur %d : ",i+1);
        scanf("%s",joueurMA[i].nom);
    }
    joueurMA[joueur_actuelMA].symbol='X';
    joueurMA[joueur_actuelMA+1].symbol='O';

    printf("\n.......................................................\n");
    printf("\ninformations sur les joueurs");

    for(int iMA = 0; iMA <NBRE_JOUEUR; iMA++)
    {
        printf("\n\nJoueur %d",iMA+1 );
        printf("\nNom: %s", joueurMA[iMA].nom);
        printf("\nMarque : %c", joueurMA[iMA].symbol);
    }
    printf("\n.........................................................\n");

    //initialisation du plateau
    plateauMA[TAILLE][TAILLE]=init_plateauMA(plateauMA);

    afficher_plateauMA(plateauMA);
    printf("\n");

    int victoireMA=0,tourMA=1;
    
    while (victoireMA!=1 || victoireMA!=-1)
    {
        printf("%s , veuillez entrez les coordonnées de la case à occuper (1-3): ",joueurMA[joueur_actuelMA].nom);
        scanf("%d %d",&xMA,&yMA);
        
        while (plateauMA[xMA-1][yMA-1] !='-' )
        {
            printf("Case occuper choisissez en une autre: ");
            scanf("%d %d",&xMA,&yMA);
        }
        plateauMA[xMA-1][yMA-1]=joueurMA[joueur_actuelMA].symbol;

        afficher_plateauMA(plateauMA);
        printf("\n");
        
        joueur_actuelMA = (joueur_actuelMA+1) % NBRE_JOUEUR; // Passe le tourMA au joueur suivant
        if (tourMA>=3)
        {
            if (departage_jeuMA(plateauMA,joueurMA)==1)
            {
                printf("\n~~~~~~~~~~~ JOUEUR %s À GAGNER LA PARTiE ~~~~~~~~~~~\n",joueurMA[joueur_actuelMA= (joueur_actuelMA+1) % NBRE_JOUEUR].nom);
                return 0;
            }else if (departage_jeuMA(plateauMA,joueurMA)==-1)
            {
                printf("\n~~~~~~~~~~~~~~ MATCH NUL VOUS AVEZ LE MEME NiVEAU  ~~~~~~~~~~~~~~\n");
                return 0;
            }else{
                continue;
            }
        }
        if(joueur_actuelMA == 0)//on vérifie si tous les joueurs ont joués
        {
        printf("\n..............................................................................\n");
        printf("Tour %d\n", tourMA++);
        }
        continue;
    }
    return 0;
}