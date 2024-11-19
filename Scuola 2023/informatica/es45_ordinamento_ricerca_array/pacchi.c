#include <stdio.h>
#include <string.h>

#define N_PACCHI 10

int ritrova(int posiz[N_PACCHI], char pacchi[N_PACCHI][10], char daTrovare[10]){
    for (int i = 0; i < N_PACCHI; i++)
    {
        if(strcmp(daTrovare,pacchi[i])==0){
            return i;
        }
    }
    return -1;
}

int main(){
    int indice;
    char nomeRicerca[10];
    int posizionee[N_PACCHI]={200,312,31532,32123,31230,414,3123,214,1023,311};
    char codice[N_PACCHI][10]={"AAAD","AAABBB","BBBCCC","CCCDDD","DDDEEE","EFHDF","SDFFSS","HD2H5SDDS","HD5SHSDH","HDHSDH1"};

    printf("Inserisci il codice del pacco da trovare \n");
    scanf("%s",nomeRicerca);

    indice=ritrova(posizionee,codice,nomeRicerca);

    if(indice!=-1){
        printf("Il paccco e' presente in posizione %d",posizionee[indice]);
    }
    else printf("Il pacco non e' presente");
    
    }
