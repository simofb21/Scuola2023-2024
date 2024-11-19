#include <stdio.h>
#include <string.h>

#include <stdlib.h>
#define LUN 4
typedef char stringa[20];
typedef int codice;

typedef struct{
    int codiceCorso;
    stringa titolo;
    int durataOre;
    stringa nomeProf;
    float qtaIscr;
    stringa sede;
}Corso;

void ordinaDurataDecrescente(Corso corsiUni[LUN]){
    Corso temp;
    int scambi;
    do{
        
        for (int i = 0; i < LUN-1; i++)
        {
            scambi=0;
            if(corsiUni[i].durataOre<corsiUni[i+1].durataOre){
                temp=corsiUni[i];
                corsiUni[i]=corsiUni[i+1];
                corsiUni[i+1]=temp;
                scambi=1;
            }
        }
        
    }while(scambi==1);
}
void nomeCorsoLungo(Corso corsiUni[LUN]){
    
        ordinaDurataDecrescente(corsiUni);
        printf("Il corso piu lungo e' %s \n",corsiUni[0].titolo);
    
}
void stampaInfo(Corso corsiUniversitari[LUN],int codice){
    int find=0;
    for (int i = 0; i < LUN; i++)
    {
        if(corsiUniversitari[i].codiceCorso==codice){
            printf("Codice: %d\n", corsiUniversitari[i].codiceCorso);
            printf("Titolo: %s\n", corsiUniversitari[i].titolo);
            printf("Durata: %d ore\n", corsiUniversitari[i].durataOre);
            printf("Nome del professore: %s\n", corsiUniversitari[i].nomeProf);
            printf("Quota di iscrizione: %.2f\n", corsiUniversitari[i].qtaIscr);
            printf("Sede: %s\n", corsiUniversitari[i].sede);
            break;
            find=1;
        }
        
    }
    if(find==0)
        printf("Non trovato quel corso \n");
    
}
codice main(){
    int codice;
    int scelta,flag=0;
    Corso corsiUniversitari[LUN]={
        {676,"Fisica",100,"Rossi",100.50,"Milano"},
        {898,"Matematica",1000,"Bianchi",821.21,"Roma"},
        {821,"Informatica",802,"Verdi",1000.31,"Milano"},
        {122,"Ingegneria",30,"Bianchini",1000.40,"Cremona"}
    };

    do
    {
        printf("Fai la tua scelta\n0:Uscire\n 1:Ordina decrescente  \n2 Visualizzare il nome del corso piu lungo\n3 Stampare le informazioni relative a un corso di cui inserisci il codice\n");
        scanf("%d",&scelta);
        switch (scelta)
        {
        default:
            printf("Error 404\n");
            break;
        case 1:
            ordinaDurataDecrescente(corsiUniversitari);
            printf("Ordinato    \n");
            break;
        case 2:
            nomeCorsoLungo(corsiUniversitari);
            break;
        case 3:
            printf("Inserisci codice corso ");
            scanf("%d",&codice);
            stampaInfo(corsiUniversitari,codice);
            break;
        case 0:
            flag=1;
            break;
        }

    } while (flag==0);
    
    return 0;
}