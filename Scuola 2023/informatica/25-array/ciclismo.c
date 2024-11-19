#include <stdio.h>

    float tappaDifficile(float mDislivello,float km){
        return mDislivello/km+km;   //la tappa più dura, è quella con più km e con un rapporto tra i km e mdsl magggiore
    }
    int main(){
        float mDislivello[12],dislivello;
        float kmTappa[12],km;
        float rapporto,maxRapporto=0.0;
        int i;
        int GiornoTappaDislivello,giornoTappaKM,giornoTappaDifficile;
        for(i=0;i<12;i++){
            printf("Quanti kilometri hai fatto oggi nella tappa %d ? ",i+1);
            scanf("%f",&kmTappa[i]);
            printf("Quanti metri di dislivello hai fatto oggi nella tappa %d ? ",i+1);
            scanf("%f",&mDislivello[i]);
            if(i==0){
                dislivello=mDislivello[0];
                km=kmTappa[0];
            }
            if(mDislivello[i]>=dislivello)      //trovo valore con dislivello maggiore
                {
                    dislivello=mDislivello[i];
                    GiornoTappaDislivello=i+1;
                }
            if(kmTappa[i]>=km)  //calcolo distanza maggiore
                {
                    km=kmTappa[i];
                    giornoTappaKM=i+1;
                }
            rapporto = tappaDifficile(mDislivello[i],kmTappa[i]);   //calcolo la tappa più difficile in assoluto
            if (rapporto>maxRapporto) {
                maxRapporto=rapporto;
                giornoTappaDifficile=i+1;
        }
            
        }
        printf("Il giorno con piu' dislivello era il %d con %.2f metri di dislivello",GiornoTappaDislivello,dislivello);
        printf("\nIl giorno con piu' km era il %d con %.2f km",giornoTappaKM,km);
        printf("\nIl giorno con la tappa piu' difficile in asssoluto era il %d. Con %.2f kilometri e %.2f metri di dsl",giornoTappaDifficile,km,dislivello);
    }