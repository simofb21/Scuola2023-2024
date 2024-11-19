#include <stdio.h>
#include <string.h>

#define MAX_PERSONE_ENTRANO 10
int numeroElementi = 0;

void inserimento(char listaAccesso[MAX_PERSONE_ENTRANO][20]){
    char sn;
    while(numeroElementi<MAX_PERSONE_ENTRANO){
        printf("Inserisci il nome della persona: \n");
        scanf("%s",listaAccesso[numeroElementi]);
        numeroElementi++;
        printf("Desideri inserire altre persone ? s/n\n");
        scanf(" %c",&sn);
        if(sn!='s' && sn!='S')
            break;
}
}
void cancellazione(char listaAccesso[MAX_PERSONE_ENTRANO][20]){
   char nomeCanc[20];
   char sn;
    int nEl=numeroElementi;
    int fatto=0;
    while(numeroElementi>0){
    
    printf("Inserisci il nome della persona  da cancellare \n");
    scanf("%s",nomeCanc);
    for(int i=0; i<nEl; i++){
        if(strcmp(nomeCanc,listaAccesso[i])==0){
                strcpy(listaAccesso[i],listaAccesso[i+1]);
                numeroElementi--;
                fatto=1;
                }
        
    }
    if(fatto==1)
        printf("Fatto\n");
    else printf("Non possibile farlo \n");
    printf("Desideri cancellare altre persone ? s/n\n");
    scanf(" %c",&sn);
    if(sn!='s' && sn!='S')
        break;
    }

}
void controlloLista(char listaAccesso[MAX_PERSONE_ENTRANO][20]){
    char nomeCheck[20];
    int tr=0;
    printf("Inserisci il nome da controllare in lista : \n");
    scanf("%s",nomeCheck);
    for(int i=0; i<numeroElementi; i++){
        if(strcmp(nomeCheck,listaAccesso[i])==0){
            printf("Il tuo nome e' in lista \n");
            tr++;
            break;
    }
    }
    if(tr==0)
        printf(" Il nome non e' nella lista \n");
}

int main(){
    int scelta;
    int flag=1;
    char listaAccesso[MAX_PERSONE_ENTRANO][20];
    int numeriEl=0;
    while(flag==1){
        printf("Fai la tua scelta: \n 1)Inserire una persona in lista \n 2)Eliminare una persona dalla lista \n 3)Controllare se un nome e' presente nella lista \n 4)Stampare la lista in ordine di inserimento \n5)Svuotare la lista\n6)Uscire dal menu\n");
        scanf("%d",&scelta);

        switch(scelta){
            case 1:
                inserimento(listaAccesso);
                break;
            
            case 2:
                cancellazione(listaAccesso);
                break;
            case 3:
                controlloLista(listaAccesso);
                break;
            case 4:
                printf("Ecco l' elenco delle persone in lista : \n");
                for(int k=0; k<=numeroElementi; k++){
                    printf("Nome %d : %s \n",k+1,listaAccesso[k]);
                }       
                break;
            
            case 5:
                    numeriEl=numeroElementi;
                    for(int j=0; j<numeriEl; j++){
                        strcpy(listaAccesso[j]," ");
                        numeroElementi--; 
                    }    
                    break; 
            case 6:
                flag=0;     
                break;  
        }   
    }
    return 0;
}