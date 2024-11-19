#include <stdio.h>
#include <string.h>

typedef  char Stringa[20];

typedef struct
{
    Stringa marca;
    int cilindrata;
    int annoImm;
    Stringa nome;
    Stringa cognome;

}Auto;

void autocilindrataSuperiore(Auto salone[5]){
    printf("Le auto con cilindrata superiore ai 1,8k sono :\n");
    for (int i = 0; i < 5; i++)
    {
        if(salone[i].cilindrata>=1800){
            printf("%s\n",salone[i].cognome);
        }
    }
    
}
int nAutoAnno(Auto salone[5],int anno){
    int returnValue=0;
    for (int i = 0; i < 5; i++)
    {
        if(salone[i].annoImm==anno){
            returnValue++;
        }
    }
    return returnValue;
}
int main(){
    Auto autosalone[5];
    int scelta,anno;

    for (int i = 0; i < 5; i++)
    {
        printf("\nInserisci le caratteristiche dell' auto %d \n",i+1);
        printf("Marca: ");
        scanf("%s",autosalone[i].marca);
        printf("Cilindrata: ");
        scanf("%d",&autosalone[i].cilindrata);
        printf("Anno immatricolazione: ");
        scanf("%d",&autosalone[i].annoImm);
        printf("Nome: ");
        scanf("%s",autosalone[i].nome);
        printf("Cognome: ");
        scanf("%s",autosalone[i].cognome);
        
    }
    do
    {
        printf("\nFai la tua scelta:\n 0 Esci\n1 Visualizzare il cognome dei proprietari con auto che hanno una cilindrata superiore ai 1800cc\n2 Visualizzare il numero di auto immatricolate in un determinato anno\n");
        scanf("%d",&scelta);
        
        switch (scelta)
        {
        case 0:
            scelta=0;
            printf(">fine<");
            break;
        case 1:
            autocilindrataSuperiore(autosalone);
            break;
        case 2:
            printf("\nInserisci l' anno di cui vuoi avere informazioni ");
            scanf("%d",&anno);
            printf("\nIn quell' anno sono state immatricolate %d auto",nAutoAnno(autosalone,anno));
            break;
        default:
            break;
        }
    
    
    } while (scelta!=0);
    
    
}