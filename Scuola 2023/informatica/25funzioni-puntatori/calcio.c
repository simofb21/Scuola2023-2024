#include <stdio.h>
    int partita(int goalFatti , int GoalSubiti);
    
    int main(){
        int fatti,subiti,punteggio;
        for ( int i=1; i<=3; i++)
        {
        switch (i)
        {
        case 2:
            printf("Dopo la prima partita il punteggio e' %d\n",punteggio); //metto uno switch per stampare il punteggio voltaper volta
            break;
        case 3:
            printf("Dopo la seconda partita il punteggio e' %d\n",punteggio);
            break;
        default:
            break;
        }
         printf("Inserisci i goal fatti! ");
        scanf("%d",&fatti);
        printf("\n Inserisci i goal subiti ");
        scanf("%d",&subiti);
        punteggio=punteggio+partita(fatti,subiti);

        }
        
      

        printf("Il punteggio finale che hai ottenuto e' %d",punteggio);
    }
    

    int partita(int goalFatti, int GoalSubiti){
        int punti;
        if(goalFatti>GoalSubiti)
            punti=3;
        else if(goalFatti==GoalSubiti)
            punti=1;
        else punti=0;
        return punti;

    }

/*
Rispondo alle domande: 
1)differenza tra funzione e procedura: in c la procedura è void, perché non restituisce nulla, la funzione restituisce un valore.
2)variabile globale  la metto in fuori dal main o dalla funzione , e vale per tutto il programma , la variabile locale, può essere usata solo nella funzione o nel main.
3)Quelli formali sono i parametri che ho nella funzione, invece quelli attuali son quelli del main, quindi i nomi effettivi delle variabili che io uso.
4)Passando perr valore , io nella funzione dico che riceverà un valore, poi nel main quando chiamo la funzione, metto la variabile con quel valore.
    Invece per indirizzo, io uso la stessa variabile nella funzione e nel main, la modifico in entrambi, con i puntatori.

*/
   