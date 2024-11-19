#include <stdio.h>
#include <string.h> 
#define N_OGG 5

void ordinePeso(char nomiOGGetti[N_OGG][20], float pesi[N_OGG]){    //ordino i due elenchi
    int cambi, i;
    char temp[20];
    float valoreTemp;
    do{
        cambi=0;
        for(i = 0; i < N_OGG-1; i++){
            if(pesi[i]>pesi[i+1]){
                strcpy(temp,nomiOGGetti[i]);
                valoreTemp=pesi[i];
                strcpy(nomiOGGetti[i],nomiOGGetti[i+1]);
                pesi[i]=pesi[i+1];
                strcpy(nomiOGGetti[i+1],temp);
                pesi[i+1]=valoreTemp;
                cambi=1;
            }
        }
    } 
    while(cambi==1);

}

int nOggetti(float capacit, float peso[N_OGG]){
    float somma=0.0; 
    int i;
    for (i = 0; i < N_OGG; i++)
    {   
        somma+=peso[i];
        if(somma>capacit){
            break;
        }
    }
    return i; //restituisco quanti oggetti posso prendere che essendo ordinato so anche quali e son certo sia il numero maggiore possibile
    
}
int main(){
    float capacita=10.12; //dichiaro peso capacità già io
    float sommaTot=0.0;
    char nomiOggetti[N_OGG][20]={"Cassetta","Chiavi","Libri","Trucchi","Abbigliamento"};
    float pesoOggetti[N_OGG]={0.5, 0.4, 1.4, 6.2, 11.20};
    int nOggPresi;
    float sommaPesiCaso=0.0; 

    ordinePeso(nomiOggetti,pesoOggetti);

    for(int i=0; i<N_OGG;i++){
        sommaTot+=pesoOggetti[i];
    }

    if(sommaTot<=capacita){ //se la somma è minore della capacità, li prendo tutti
        printf("Puoi prendere tutti gli oggetti\nIl peso che trasporti e' di %.2f : kg",sommaTot);
    }
    else{  //altrimenti calcolo quanti oggetti posso prendere e poi do tutto il resto
        nOggPresi=nOggetti(capacita,pesoOggetti);
        printf("Puoi prendere %d oggetti\nEssi sono: \n",nOggPresi);
        for (int j = 0; j < nOggPresi; j++)
        {
           printf("%s\n",nomiOggetti[j]);
           sommaPesiCaso+=pesoOggetti[j];
        }
        
        printf("Il peso che trasporti e' %.2f kg",sommaPesiCaso);
    }


}