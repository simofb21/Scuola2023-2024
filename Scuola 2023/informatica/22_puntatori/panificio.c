/*
Fusar Bassini Simone panificio.c*/
#include <stdio.h>

#define PANE 100
#define PIZZA 80
#define PASTA 75

//pane
void preparaPane(int *saccoFarina){
    int nPanini;
    int farinaRichiesta;
    printf("Quanti panini vuoi?");
    scanf("%d",&nPanini);
    farinaRichiesta=nPanini*PANE;
    if(*saccoFarina>=farinaRichiesta){
         printf("Consegnati %d panini\n",nPanini);
        *saccoFarina-=farinaRichiesta;
    }else{
        printf("Non c'e' abbastanza farina per preparare cosi' tanti panini. Consegnati soltanto %d panini.\n",*saccoFarina/PANE);
        *saccoFarina==0;
    }
}

//pizza
void preparaPizza(int *saccoFarina){
    int nPizze;
    printf("Quante pizze vuoi?");
    scanf("%d",&nPizze);
    int farinaRichiesta=nPizze*PIZZA;

    if(*saccoFarina>=farinaRichiesta){ 
        printf("Consegnate %d pizze\n",nPizze);
        *saccoFarina-=farinaRichiesta;
       
    }else{
        printf("Non possiamo preparare così tante pizze; ne abbiamo consegnate solo %d \n",*saccoFarina/PIZZA);
        *saccoFarina==0;
    }
}

// pasta
void preparaPasta(int *saccoFarina) {
    int porzioniPasta;
    printf("Quante porzioni di pasta desideri?");
    scanf("%d",&porzioniPasta);
    int farinaRichiesta=porzioniPasta*PASTA;
    
    if(*saccoFarina>=farinaRichiesta){
        *saccoFarina-=farinaRichiesta;
        printf("Consegnate %d porzioni di pasta",porzioniPasta);
        printf("farina rimanente %d",*saccoFarina);
    }else{
        printf("Non possiamo preparare abbastanza pasta, ne consegnamo solo %d\n",*saccoFarina/PASTA);
        *saccoFarina==0;
    }
    
}

int main(){
    int sacco=5000,scelta;
     do{
        printf("Fai la tua scelta:\n 1 Pane\n2 Pizza\n3 Pasta\n4 Esci ");
        scanf("%d",&scelta);
        switch (scelta){
            case 1:
                preparaPane(&sacco);
                break;
            case 2:
                preparaPizza(&sacco);
                break;
            case 3:
                preparaPasta(&sacco);
                break;
            case 4:
                printf("Uscita dal programma.\n");
                break;
            default:
                printf("Scelta non valida.\n");
                break;
        }
    }while(scelta!=4);
}