#include <stdio.h>
#include <string.h>

#define LETTERE_MAX 20
#define N_NOMI 6



void stampaParolaDaIndice(char elencoNomi[N_NOMI][LETTERE_MAX],int  indice){
    for(int i=0; i<LETTERE_MAX; i++){
        if(i==indice-1)
            printf("La PAROLA E' : %s",elencoNomi[i]);
    }

}

int parolaLunga(char elencoNomi[N_NOMI][LETTERE_MAX]){
    int maggiore=0;
    int i;
    int j=0;
    for (i = 0; i < N_NOMI; i++)
    {
        if(strlen(elencoNomi[i])>=maggiore){
            maggiore=strlen(elencoNomi[i]) ;
            return j;
            }
        j++;
    }
    
}


int findParola(char elencoNomi[N_NOMI][LETTERE_MAX],char parola[]){
    int i;

    for(i=0; i<N_NOMI; i++){
        if(strcmp(parola,elencoNomi[i])==0){
            return i;
        }
         
    }
    return -1;
}
int main(){
    char sn;
    char parola[20];
    char elencoNomi[N_NOMI][LETTERE_MAX];
    int i;
    int opzioni;
    int posizioneDaDareF1;
    int indiceParolaLunga;

    for(i=0; i<N_NOMI; i++)
    {
        printf("Inserisci il nome %d ",i+1);
        scanf("%s",elencoNomi[i]);
    }

    while(1){

        printf("Cosa desideri sapere? \n 1: Parola corrispondente al numero inserito\n 2:Parola elenco piu' lunga \n 3: Sapere se una parola esiste ");
        scanf("%d",&opzioni);


        switch (opzioni)
        {
        case 1:
            printf("\nIn quale posizione vuoi sapere la parola : ");
            scanf("%d",&posizioneDaDareF1);
            if(posizioneDaDareF1>=0 && posizioneDaDareF1<=4){
                stampaParolaDaIndice(elencoNomi, posizioneDaDareF1);
            }
            else printf("\nNumero non disponibile in elenco");
            break;
        

        case 2:
            indiceParolaLunga=parolaLunga(elencoNomi);
            printf("\nLa parola lunga e' : %s", elencoNomi[indiceParolaLunga]);
            break;

        case 3:
            printf("Inserisci la parola da cercare nell' elenco : ");
            scanf("%s",parola);

            if(findParola(elencoNomi,parola)>=0){
                printf("\nLa tua parola si trova nell' indice %d",findParola(elencoNomi,parola)+1);

            }
            else printf("\nla tua parola non e' stata trovata :( ");
         
           break;
        
        
        default:
            printf("Opzione non disponnibile :(");
            break;
        
        }

        printf("\nANcora? S/N ");
        scanf(" %c",&sn);
        
        if(sn=='n' || sn=='N'){
            break;
        }
    }
}
    

