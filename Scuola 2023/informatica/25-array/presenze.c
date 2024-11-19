#include <stdio.h>

    void Inserisci(int lunghezza, int nInserito[]){
        for(int i=0;i<lunghezza;i++){
            printf("Insreisci un numero : e' il %do ",i+1);
            scanf("%d",&nInserito[i]);
           
    }
    }
    int trovaN(int lunghezza, int nInserito[], int nDaCercare){
            int nVoltePres=0;
            int i;
            for(i=0;i<lunghezza;i++){
                if(nInserito[i]==nDaCercare)
                    nVoltePres++;
            }
            return nVoltePres;
    }

    int main(){
        int lunghezza=8,numero[8],nDaCercare;
        int nVolteTrovato;
        Inserisci(lunghezza,numero);

        printf("Che numero vuoi cercare? ");
        scanf("%d",&nDaCercare);

        nVolteTrovato=trovaN(lunghezza,numero,nDaCercare);
        printf("Il numero che ci hai chiesto e' stato trovato %d volte ",nVolteTrovato);

       
    }
