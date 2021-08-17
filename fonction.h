#include <stdio.h>
#include<stdlib.h>
#include <time.h>

#define nbreCoups 4
#define max1 25
#define min1 0
#define max2 100
#define min2 10
#define max3 500
#define min3 50
#define max4 1000
#define min4 150



/* cette fonction permet de comparer le nombre aléatoire fourni par la machine avec le nbre saisi par
le joueur. Puis, au bout d'un nombre de tentatives précisés, dire si le joueur a gagné ou pas*/
int compare(int Max, int Min){

      int i=nbreCoups, nbre,j=0, nbreAlea=(rand()%(Max-Min+1)) + Min;
      printf("\n\n\t   Vous avez %d tentatives pour trouver le nombre mystère!\n\t  Le nombre mystère entre %d et %d est:\t",i,Min,Max);
      do{
          scanf("%d",&nbre);
          system("clear");
          if (nbre>nbreAlea)
          {
          	printf("\n\n\n\n\t\t   Le nombre que vous avez saisi est plus grand que le nombre mystère.\n\n");
          }
          else if (nbre<nbreAlea)
          {
          	printf("\n\n\n\n\t\t   Le nombre que vous avez saisi est plus petit que le nombre mystère.\n\n");
          }
          j++;
          i--;
          if (nbre!=nbreAlea && i!=0)
          {
            printf("\n\n\t   Il vous reste %d tentatives!\n\t  Le nombre mystère entre %d et %d est:\t",i,Min,Max);
          }
      }while(nbre!=nbreAlea && i!=0);

      if (i==0)
      { system("clear");
      	printf("\n\n\t\t  Vous avez perdu! Le nombre mystère était: %d",nbreAlea);
      }
      else{
        system("clear");
      	printf("\n\n\t\t  Félicitations, vous avez gagné à la %de tentatives!",j);
      }
 
   return i;
}

/* cette fonction permet à deux personnes de jouer. Le 1er saisit le nombre mystère et le deuxième doit le deviner.
Puis, elle affichera s'il a perdu ou gagné.*/
int compare1(int Max, int Min){

      int i=nbreCoups, nbre, nbreAlea,j=0;
  
          printf("\n\n\t\t ====> PREMIER JOUEUR.\n\n\t Entrez un nombre compris entre %d et %d :  ", Min, Max);
          scanf("%d",&nbreAlea);
          system("clear");
          printf("\n\n\t\t ====> DEUXIÈME JOUEUR.");
          printf("\n\n\t   Vous avez %d tentatives pour deviner le nombre mystère saisi par le premier joueur!\n\n\t   Le nombre mystère est compris entre %d et %d :\t",i,Min,Max);
          scanf("%d",&nbre);
        do{
          system("clear");
          if (nbre>nbreAlea)
          { system("clear");
          	printf("\n\n\n\n\t\t Le nombre que vous avez saisi est plus grand que le nombre mystère.\n\n");
          }
          else if (nbre<nbreAlea){
            system("clear");
          	printf("\n\n\n\n\t\t Le nombre que vous avez saisi est plus petit que le nombre mystère.\n\n");
          }
          j++;
          i--;
          if (nbre!=nbreAlea && i!=0)
          {
            printf("\t   Il vous reste %d tentatives!\n\t   Le nombre mystère compris entre %d et %d est:\t",i,Min,Max);
            scanf("%d",&nbre);
          }
        }while(nbre!=nbreAlea && i!=0);
 
      if (i==0)
      { system("clear");
      	printf("\n\n\t\t  Vous avez perdu! Le nombre mystère était: %d",nbreAlea);
      }
      else{
        system("clear");
      	printf("\n\n\t\t  Félicitations, vous avez gagné à la %de tentatives!",j);
      }
   return i;
}

/* cette fonction permet d'accéder aux différents niveaux que le joueur choisit*/
int niveaux(int choix){

     int decision=choix,Ch,coup,a;
     switch(choix){

              case 1: system("clear"); 
                      printf("\n\n\n\t\t   =====> NIVEAU I\n\n");
                     
                     coup=compare(max1,min1);
                     if (coup==0)
                     {
                        printf("\n\n\t\t  1-Rejouer\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&Ch);
                        switch(Ch){
                
                            case 1: system("clear");
                                   niveaux(decision); break;
                
                            case 2: system("clear");
                                   niveaux(5); break;
                
                            case 3: system("clear");
                                   niveaux(6); break;
                        }
                     }
                     else{
                
                        printf("\n\n\t\t  1-Niveau suivant\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&Ch);   
                        switch(Ch){
                
                            case 1: system("clear");
                                   niveaux(decision+1); break;
                
                            case 2: system("clear");
                                   niveaux(5); break;
                
                            case 3: system("clear");
                                   niveaux(6); break;
                        }
                     } break;

              case 2: system("clear"); 
                      printf("\n\n\n\t\t   =====> NIVEAU II\n\n");
                     
                     coup=compare(max2,min2);
                     if (coup==0)
                     {
                        printf("\n\n\t\t  1-Rejouer\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&Ch);
                        switch(Ch){
                
                            case 1: system("clear");
                                   niveaux(decision+1); break;
                
                            case 2: system("clear");
                                   niveaux(5); break;
                
                            case 3: system("clear");
                                   niveaux(6); break;
                        }
                     }
                     else{
                
                        printf("\n\n\t\t  1-Niveau suivant\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&Ch);   
                        switch(Ch){
                
                            case 1: system("clear");
                                   niveaux(decision+2); break;
                
                            case 2: system("clear");
                                   niveaux(5); break;
                
                            case 3: system("clear");
                                   niveaux(6); break;
                        }
                     }    break;

              case 3: system("clear"); 
                      printf("\n\n\n\t\t   =====> NIVEAU III\n\n");
                     
                     coup=compare(max3,min3);
                     if (coup==0)
                     {
                        printf("\n\n\t\t  1-Rejouer\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&Ch);
                        switch(Ch){
                
                            case 1: system("clear");
                                   niveaux(decision+2); break;
                
                            case 2: system("clear");
                                   niveaux(5); break;
                
                            case 3: system("clear");
                                   niveaux(6); break;
                        }
                     }
                     else{
                
                        printf("\n\n\t\t  1-Niveau suivant\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&Ch);   
                        switch(Ch){
                
                            case 1: system("clear");
                                   niveaux(decision+3); break;
                
                            case 2: system("clear");
                                   niveaux(5); break;
                
                            case 3: system("clear");
                                   niveaux(6); break;
                        }
                     } break;

              case 4: system("clear"); 
                      printf("\n\n\n\t\t   =====> NIVEAU IV\n\n");
                     
                     coup=compare(max4,min4);
                     if (coup==0)
                     {
                        printf("\n\n\t\t  1-Rejouer\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&Ch);
                        switch(Ch){
                 
                            case 1: system("clear");
                                   niveaux(decision+3); break;
                 
                            case 2: system("clear");
                                   niveaux(5); break;
                 
                            case 3: system("clear");
                                   niveaux(6); break;
                        }
                     }
                     else{
                 
                       printf("\n\n\t\t   Félicitations, vous avez réussi tous les niveaux!");

                     } break;

              case 5: system("clear");
                      return 0;  break;

              case 6: system("clear"); 
                     int rep;
                     printf("\n\n\n\t\t  Etes-vous sûr(e) de vouloir quitter le jeu?\n\t  1-Oui\n\t  2-Non\n\n\t  Votre choix:\t");
                     scanf("%d",&rep);
                     if (rep==1)
                     {
                     	return 3;
                     }  
                     else{
                        return 0;
                    }   break;
     }
}


int mode1(){

     system("clear");
     printf("\n\n\t\t\t\t      ##############################\n"); 
     printf("\t\t\t              #                            #\n");
     printf("\t\t\t              #       MODE UN JOUEUR       #\n");
     printf("\t\t\t              #                            #\n");
     printf("\t\t\t              ##############################\n\n");
     int ch, choix;
     printf("\n\n\t\t TAPEZ 1 POUR COMMENCER A JOUER:\t");
     scanf("%d",&ch); 
     while(ch!=1){
        system("clear");
        printf("\n\n\n\t\t\t  Vous devez taper le chiffre 1 pour commencer le jeu:\t");
        scanf("%d",&ch);
     }
     choix=niveaux(ch);
  return choix;
}


/* cette fonction permet d'accéder aux différents*/
int niveaux1(int choix){
     
     int ch,decision=choix,coup;
     switch(choix){

              case 1: system("clear"); 
                      printf("\n\n\n\t\t   =====> NIVEAU I\n\n");
                     
                     coup=compare1(max1,min1);
                     if (coup==0)
                     {
                        printf("\n\n\t\t  1-Rejouer\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&ch);
                        switch(ch){
                
                            case 1: system("clear");
                                   niveaux1(decision); break;
                
                            case 2: system("clear");
                                   niveaux1(5); break;
                
                            case 3: system("clear");
                                   niveaux1(6); break;
                        }
                     }
                     else{

                        printf("\n\n\t\t  1-Niveau suivant\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&ch);   
                        switch(ch){
                
                            case 1: system("clear");
                                   niveaux1(decision+1); break;
                
                            case 2: system("clear");
                                   niveaux1(5); break;

                            case 3: system("clear");
                                   niveaux1(6); break;
                        }
                     } break;

              case 2: system("clear"); 
                      printf("\n\n\n\t\t   =====> NIVEAU II\n\n");
                     
                     coup=compare1(max2,min2);
                     if (coup==0)
                     {
                        printf("\n\n\t\t  1-Rejouer\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&ch);
                        switch(ch){
                
                            case 1: system("clear");
                                   niveaux1(decision+1); break;
                
                            case 2: system("clear");
                                   niveaux1(5); break;
                
                            case 3: system("clear");
                                   niveaux1(6); break;
                        }
                     }
                     else{

                        printf("\n\n\t\t  1-Niveau suivant\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&ch);   
                        switch(ch){
                
                            case 1: system("clear");
                                   niveaux1(decision+2); break;
                
                            case 2: system("clear");
                                   niveaux1(5); break;

                            case 3: system("clear");
                                   niveaux1(6); break;
                        }
                     } break;

              case 3: system("clear"); 
                      printf("\n\n\n\t\t   =====> NIVEAU III\n\n");
                     
                     coup=compare1(max3,min3);
                     if (coup==0)
                     {
                        printf("\n\n\t\t  1-Rejouer\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&ch);
                        switch(ch){
                
                            case 1: system("clear");
                                   niveaux1(decision+2); break;
                
                            case 2: system("clear");
                                   niveaux1(5); break;
                
                            case 3: system("clear");
                                   niveaux1(6); break;
                        }
                     }
                     else{

                        printf("\n\n\t\t  1-Niveau suivant\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&ch);   
                        switch(ch){
                
                            case 1: system("clear");
                                   niveaux1(decision+3); break;
                
                            case 2: system("clear");
                                   niveaux1(5); break;

                            case 3: system("clear");
                                   niveaux1(6); break;
                        }
                     } break;

              case 4: system("clear"); 
                      printf("\n\n\n\t\t   =====> NIVEAU IV\n\n");
                     
                     coup=compare1(max4,min4);
                     if (coup==0)
                     {
                        printf("\n\n\t\t  1-Rejouer\n\t\t  2-Menu principal\n\t\t  3-Quitter le jeu\n\n\t\t  Votre choix:\t");
                        scanf("%d",&ch);
                        switch(ch){
                
                            case 1: system("clear"); 
                                   niveaux1(decision+3); break;
                
                            case 2: system("clear"); 
                                   niveaux1(5); break;
                
                            case 3: system("clear"); 
                                   niveaux1(6);     break;
                        }
                     }
                     else{
                
                        printf("\n\n\t\t   Félicitations, vous avez réussi tous les niveaux!");
                
                     } break;

              case 5: system("clear");
                      return 0;         break;

              case 6: system("clear"); 
                     int rep;
                     printf("\n\n\n\t\t  Etes-vous sûr(e) de vouloir quitter le jeu?\n\t  1-Oui\n\t  2-Non\n\n\t  Votre choix:\t");
                     scanf("%d",&rep);
                     system("clear");
                     if (rep==1)
                     {
                     	return 3;
                     } 
                     else{
                        return 0;   
                    }       break;                 
      }
}


int mode2(){

     system("clear");
     printf("\n\n\t\t\t\t      ##############################\n"); 
     printf("\t\t\t              #                            #\n");   
     printf("\t\t\t              #      MODE DEUX JOUEURS     #\n");
     printf("\t\t\t              #                            #\n");    
     printf("\t\t\t              ##############################\n\n");
     int ch, choix;
     printf("\n\n\t\t TAPEZ 1 POUR COMMENCER A JOUER:\t");
     scanf("%d",&ch); 
     while(ch!=1){
        system("clear");
        printf("\n\n\n\t\t\t  Vous devez taper le chiffre 1 pour commencer le jeu:\t");
        scanf("%d",&ch);
     }
     choix=niveaux1(ch);
  return choix;
}




/* la fonction menu principal permet a l'utilisateur de faire le choix du mode de jeu souhaité
ou encore de quitter le jeu s'il le souhaite*/
int menuPrincipal(){
     int choix,ch;
     do{
        system("clear");
     	printf("\n\n\t\t\t\t      ##############################\n");
        printf("\t\t\t              #                            #\n");
        printf("\t\t\t              #                            #\n");
     	printf("\t\t\t              #       MENU PRINCIPAL       #\n");
        printf("\t\t\t              #                            #\n");
        printf("\t\t\t              #                            #\n");        
     	printf("\t\t\t              ##############################\n\n");
        
        printf("\t\t  1-MODE UN JOUR\n\t\t  2-MODE DEUX JOUEURS\n\t\t  3-QUITTER\n\n\t Votre choix:\t");
        scanf("%d",&choix);
        switch(choix){

        	 case 1: ch=mode1();
                     break;

        	 case 2: ch=mode2();
                     break;

        	 case 3: system("clear");
        	         break;
             default: printf("\n\n\n\n\n\t\t   #####Vous devez saisir un chiffre entre 1 et 3!!!#####\n\n\n");
                      menuPrincipal(); break;       
        }


     }while(choix!=3 && ch!=3);

}

