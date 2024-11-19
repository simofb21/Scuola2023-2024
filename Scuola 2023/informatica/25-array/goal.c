#include <stdio.h>

    
    int nGoal(int lunghezza,int goalFatti[]){   //funzione che calcola il numero di goal fatti in totale
            int goal=0;
            for(int i=0;i<lunghezza;i++){
                goal+=goalFatti[i];
            }
            return goal;        //restituisco il numero di goal fatti
    }
    float media(int lunghezza, int goalFatti[]){    //funzione che calcola media
        float medias=0.0;   
        for(int i=0;i<lunghezza;i++){
            medias+=goalFatti[i];       //sommo i valori inseriti
        }
        return medias/(float)lunghezza; //restituisco la media
        
    }

    void giocatorePiuGoal(int lunghezza, int goalFatti1[],int goalFatti2[]){    //stampo subito il messaggio per evitare di usare altre variabili nel main ecc
        int i;      //funzione che stampa chi tra i 2 ha fatto più goal in una certa partita
        for(i=0;i<lunghezza;i++){
        
                if(goalFatti1[i]>goalFatti2[i])     
                    printf("\nnella partita %d ha segnato piu' goal il giocatore 1",i+1);
                    else if(goalFatti1[i]==goalFatti2[i])
                        printf("\nNella partita %d  avete fatto entrambi gli stessi goal",i+1);
                    else    printf("\nNella partita %d ha fatto piu goal il secondo giocatore",i+1);
           
            }
        }
    void trovaGoal(int lunghezza, int goalFatti[],int goalDaTrovare){       //funzione che trova in che partita hai fatto un certo di numero di goal chiesto nel main, la funzione stampa direttamente in quale partita
      int i=0;
            for(i=0;i<lunghezza;i++){
                if(goalFatti[i]==goalDaTrovare)
                     printf("Li hai fatti nella partita  %d\n",i+1);
                else printf("Non hai mai fatto questi goal");
            }
    }

    int main(){
        int lunghezza=4, goalFatti1[4],goalFatti2[4];   
        int goalTOT1, goalTOT2;
        int i , partitaGoal; 
        float media1,media2; 
        int goal1,goal2;
        printf("\nSei il primo giocatore:" );   //prendo i dati del primo

        for(i=0;i<lunghezza;i++){
        printf("\n Quanti gol hai fatto nella partita %d ",i+1);
        scanf("%d",&goalFatti1[i]);
    }   
       
        printf("\nSei il secondo giocatore:" ); //prendo i dati del secondo
        
        for(i=0;i<lunghezza;i++){
        printf("\nQuanti gol hai fatto nella partita %d ",i+1);
        scanf("%d",&goalFatti2[i]);
    }

        goalTOT1=nGoal(lunghezza,goalFatti1);   //calcolo goal primo e poi secondo
        printf("\nI goal fatti dal primo giocatore sono %d",goalTOT1);

        goalTOT2=nGoal(lunghezza,goalFatti2);
        printf("\nI goal fatti dal secondo giocatore sono %d",goalTOT2);

        media1=media(lunghezza,goalFatti1);     //calcolo media goal primo e poi del secondo
        printf("\nLa media goal a partita del primo giocatore e'  %.3f",media1);
       
        media2=media(lunghezza,goalFatti2);
        printf("\nLa media goal a partita del secondo giocatore e'  %.3f",media2);
        

         giocatorePiuGoal(lunghezza,goalFatti1,goalFatti2); //stampo chi ha fatto più goal in partita

        printf("\nSei il primo giocatore . Quale numero di goal vuoi cercare nelle partite che hai fatto? "); //chiedo il numero di goal da cercare del primo e poi stampo in quale partita l' ho fatto
        scanf("%d",&goal1);
        trovaGoal(lunghezza,goalFatti1,goal1);
        
        printf("\nSei il secondo giocatore . Quale numero di goal vuoi cercare nelle partite che hai fatto? ");
        scanf("%d",&goal2);
        trovaGoal(lunghezza,goalFatti1,goal2);

        return 0;
    }
