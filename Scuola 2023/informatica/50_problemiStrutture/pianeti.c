#include <stdio.h>
#include <string.h>

typedef char stringa[20];

typedef struct 
{
    stringa nome;
    int diametro;
    int nSatelliti;
    float durataOrbitaAnni;
    int durataRotazioneOre;

}Pianeta; //struttura del pianeta

void nomePianetaGrande(Pianeta sisos[4]){ 
   
    int indiceMaggiore=0;
    for (int i = 0; i < 4; i++)
    {
        if(sisos[i].diametro>sisos[indiceMaggiore].diametro) //stampa il nome del pianeta più grande
            indiceMaggiore=i;
    }
    printf("Il pianeta piu grande e' : %s con diametro di %d km\n",sisos[indiceMaggiore].nome,sisos[indiceMaggiore].diametro);
    
}
float durataMediaOrbite(Pianeta sisos[4]){
    float somma=0.0;
    for (int i = 0; i < 4; i++)
    {
        somma+=sisos[i].durataOrbitaAnni;
    }
    return somma/4; //return la media 
}

void riordina(Pianeta sistema[4]){
    Pianeta temp;
    int scambi;
    do{
        scambi=0;
        for (int i = 0; i < 3; i++)
    {
        if(strcmp(sistema[i].nome,sistema[i+1].nome)>0) //riordina con bubble sort in ordine alfabetico, usando strcmp
        {
            temp=sistema[i];
            sistema[i]=sistema[i+1];
            sistema[i+1]=temp;
            scambi=1;
        }
    }
    }while(scambi == 1);
}
    
int main(){
    Pianeta sistemaSolare[4]={{"Terra",12742,1,1,24},{"Mercurio",4880,0,0.24,1408},{"Venere",12104,0,0.62,5844},{"Marte",6779,2,1.88,25}};
    int scelta;
    int flag=1;
    
    do
    {
        printf("Fai la tua scela \n: 1. stampare tutte le informazioni inserite\n 2. stampare il nome del pianeta più grande (maggiore diametro equatoriale)\n 3. calcolare e stampare la durata media delle orbite\n 4. riordinare i pianeti in ordine alfabetico\n 5. uscita\n");
        scanf("%d",&scelta);
        switch (scelta)
        {
        case 1:
            for (int i = 0; i < 4; i++)
            {
                printf("NOME %s, Diametro %d ,Numero di satelliti %d, Durata orbita in anni terrestri %.2f ,Durata rotazione in ore %d \n",sistemaSolare[i].nome,sistemaSolare[i].diametro,sistemaSolare[i].nSatelliti,sistemaSolare[i].durataOrbitaAnni,sistemaSolare[i].durataRotazioneOre);
            }
            
            break;
        case 2:
            nomePianetaGrande(sistemaSolare);
            break;
        case 3:
            printf("La durata media e' %.4f ore \n",durataMediaOrbite(sistemaSolare));
            break;
        case 4:
            riordina(sistemaSolare);
            break;
        case 5:
            printf(">End<");
            flag=0;
            break;
        default:
            break;
        }
    } while (flag==1); //menu che fa le opzioni
    return 0;
    
}