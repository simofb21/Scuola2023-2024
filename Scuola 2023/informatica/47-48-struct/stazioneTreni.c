#include <stdio.h>
#include <string.h>
#include <math.h>
typedef char Stringa[20];

typedef struct 
{   //tipo di variabile della stazione
    Stringa nomeStazione;
    int ore;
    char duePunti;
    int minuti;

}
Stazione;

typedef struct{ //tipo di variabile del tempo
    int ore;
    char duePunti;
    int minuti;
}Tempo;



Tempo tImpiegato(Stazione fermate[10],Stringa stazPart, Stringa stazArr){ //funzione che restituisce uno struct con ore:minuti
    int  minuti;
    Tempo tReturn; //variabile che resituisco
    int indicePartenza,indiceArrivo;
    for (int i = 0; i < 10; i++)
    {
        if(strcmp(stazPart,fermate[i].nomeStazione)==0)
            indicePartenza=i; //restituisco l' indice della staz di partenza
        if(strcmp(stazArr,fermate[i].nomeStazione)==0)
            indiceArrivo=i; //restituisco indice stazione arrivo
    }
    minuti=abs((fermate[indiceArrivo].ore*60+fermate[indiceArrivo].minuti)-(fermate[indicePartenza].ore*60+fermate[indicePartenza].minuti)); //calcolo la differenza in minuti con le giuste conversioni

    tReturn.duePunti=':';
    tReturn.ore=minuti/60;
    tReturn.minuti=minuti%60; //ritorno al formato corretto

    
    return tReturn;

}



int main(){
    Stazione fermate[10]={{"Staz1",0,':',30},{"Staz2",1,':',40},{"Staz3",3,':',30},{"Staz4",5,':',18},{"Staz5",6,':',30},{"Staz6",7,':',30},{"Staz7",9,':',30},{"Staz8",11,':',30},{"Staz9",13,':',30},{"Staz10",16,':',30}};
    Stringa stazionePartenza;
    Stringa stazioneArrivo;
    Tempo risultato;
    printf("Elenco stazioni: \n");
    for(int i = 0; i < 10; i++){
        printf("%s Orario: %.2d%c%.2d\n",fermate[i].nomeStazione,fermate[i].ore,fermate[i].duePunti,fermate[i].minuti);
    }
    printf("Inserisci la stazione da cui parti ");
    scanf("%s",stazionePartenza);
    printf("Inserisci la stazione in cui arrivi ");
    scanf("%s",stazioneArrivo);
    
    risultato=tImpiegato(fermate,stazionePartenza,stazioneArrivo); //variabile di tipo ore:minut
    printf("Il tempo impiegato e'  %.2d%c%.2d ",risultato.ore,risultato.duePunti,risultato.minuti); //stampa tempo

}