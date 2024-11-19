    #include <stdbool.h>
    #include <stdio.h>

    void Inserisci(int lunghezza, int nInserito[]){
        for(int i=0;i<lunghezza;i++){
            printf("Insreisci un numero : e' il %do ",i+1);
            scanf("%d",&nInserito[i]);
           
    }
    }
    bool trovaN(int lunghezza, int nInserito[], int nDaCercare){
        bool trovato=false;
            int i;
            for(i=0;i<lunghezza;i++){
                if(nInserito[i]==nDaCercare)
                    trovato=true;
            }
            return trovato;
    }

    int main(){
        int lunghezza=10,numero[10],nDaCercare;
        int Trovato;
        Inserisci(lunghezza,numero);

        printf("Che numero vuoi cercare? ");
        scanf("%d",&nDaCercare);

        if(trovaN(lunghezza,numero,nDaCercare))
            printf("Il numero e' stato trovato");
        else 
            printf("Il numero non e' stato trovato");
    

       
    }
