#include "fonction.h"


int main(int argc, char const *argv[])
{
	    system("clear");
	    int choix;
	    srand(time(NULL));
      
	    printf("\n\n\t\t\t\t #####################################\n");
        printf("\t\t\t         #                                   #\n");
        printf("\t\t\t         #                                   #\n");
     	printf("\t\t\t         # BIENVENU DANS NOTRE JEU DE HASARD #\n");
        printf("\t\t\t         #                                   #\n");
        printf("\t\t\t         #                                   #\n");     	
     	printf("\t\t\t         #####################################\n\n");

     	printf("\n\t\tPRINCIPE DU JEU: Le jeu comporte deux modes et quatre niveaux par mode.  Pour passer au niveau suivant, il faudra avoir gagné le niveau précédent.  Pour le mode un joueur, il vous faudra trouver le nombre mystère compris dans un intervalle qui vous sera précisé.  Pour le mode deux joueurs, le premier joueur devra saisir un nombre que le deuxième se devra de deviner!\n\n\t\t Etes-vous prêt(e)?\n\t\t  1-Oui\n\t\t  2-Non\n\n\t votre choix: ");
     	scanf("%d",&choix);
     	if (choix==1)
     	{
     		system("clear");
     		menuPrincipal();
     		system("clear");
     		printf("\n\n\n\t\t  MERCI D'AVOIR TESTER NOTRE JEU. NOUS ESPÉRONS QUE VOUS L'AVEZ APPRÉCIÉ!!!\n\n\n\n");
     	}
	return 0;
}