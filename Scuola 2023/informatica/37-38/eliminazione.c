#include <stdio.h>
#include <string.h>

#define LUNGHEZZA 20

int nStudenti = 5; 

void stampaPartecipanti(char nomi[nStudenti][LUNGHEZZA], float punteggio[nStudenti])
{    
    printf("----------------------\nElenco studenti: \n");
    for (int i=0; i<nStudenti; i++)
    {
        printf("Studente: %s  Punteggio ottenuto: %.2f\n",nomi[i],punteggio[i]);
    }
}

void eliminaPeggiore(char nomi[nStudenti][LUNGHEZZA], float punteggio[nStudenti])
{
    int indiceMin;
    int min=999999;
    
    for (int i = 0; i < nStudenti; i++) //for trova minimo indice 
    {
        if(punteggio[i]<=min)
        {
            min=punteggio[i];
            indiceMin=i;
        }
    }

    for(int j=indiceMin; j<nStudenti; j++)
    {
        punteggio[j]=punteggio[j+1]; // shifto il punteggio e il nome
        strcpy(nomi[j],nomi[j+1]);
    }
    nStudenti--;
    
}


int main()
{
    char nomiStudenti[nStudenti][LUNGHEZZA];
    float punteggiOttenuto[nStudenti];

    for (int i = 0; i < nStudenti; i++)
    {
        printf("Inserisci il nome dello studente %d: ",i+1);
        scanf("%s",nomiStudenti[i]);
        printf("Insrisci il punteggio ottenuto: ");
        scanf("%f",&punteggiOttenuto[i]);

    }
    
    stampaPartecipanti(nomiStudenti,punteggiOttenuto); //stampo la prima volta l' elenco
    eliminaPeggiore(nomiStudenti,punteggiOttenuto);    // cancello l'ultimo
    printf("\nStamperemo l'elemento aggiornato, senza l' ultimo classificato\n");
    stampaPartecipanti(nomiStudenti,punteggiOttenuto); //riscrivo

}