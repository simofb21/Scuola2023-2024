#include <stdio.h>

int nInquilini(int matrice[6][4]){      //funzione che restituisce il numero di inquilini del palazzo
    
    int k;
    int i;
    int somma=0;


    for(i=0; i<6; i++){
        for(k=0;k<4;k++){
            somma=somma+matrice[i][k];
        }
    }

    return somma;

}

int nAppDisabitati(int matrice[6][4]){      //funzione che restituisce il numero di appartamenti disabitati(senza restituire quale)
    
    int k;
    int i;
    int disabitati=0;


    for(i=0; i<6; i++){
        for(k=0;k<4;k++){
            if(matrice[i][k]==0){
                disabitati++;
            }
        }
    }

    return disabitati;

}


int pianoPieno(int matrice[6][4]){      //funzione che restituisce il piano più abitato
    int k;
    int i;
    int maggiore=0;
    int somma;

    for(i=0; i<6; i++){
        somma=0;
        for(k=0;k<4;k++){
           
           somma=somma+matrice[i][k];
            
        }
        if(somma>=maggiore){
            maggiore=somma;
            return i+1;
            }
        else return -99;

    }
}


int main(){
    int condominio[6][4];
    int i;
    int k;
    int nInquiliniPalazzo;
    int pianoPPieno;
    int appartamentiDisabitati;
    int opzioni;
    char sn;

    for(i=0; i<6; i++){
        for(k=0;k<4;k++){
            printf("\nInserisci il numero di inquilini che abitano nella seguente abitazione: piano %d , appartamento %d   : ",i+1,k+1);
            scanf("%d",&condominio[i][k]);
        }
    }

   
    while(1){

        printf("Cosa desideri sapere? \n 1: nTotale di Inquilini\n 2: n Appartamenti disabitati \n 3: Piano con piu' abitanti ");
        scanf("%d",&opzioni);


        switch (opzioni)
        {
        case 1:
            nInquiliniPalazzo=nInquilini(condominio);
            printf("Il numero di inquilini nel palazzo e' : %d ",nInquiliniPalazzo);
            break;
        

        case 2:
            appartamentiDisabitati=nAppDisabitati(condominio);
            printf("Il numero di appartamenti disabitati e' : %d ",appartamentiDisabitati);
            break;

        case 3:
            pianoPPieno=pianoPieno(condominio);
            printf("Il piano piu' abitato e' il : %d ",pianoPPieno);
            break;
        
        
        default:
            printf("Opzione non disponnibile :(");
            break;
        }
        printf("ANcora? S/N ");
        scanf(" %c",&sn);
        if(sn=='n' || sn=='N'){
            break;
        }
    }

}