#include <stdio.h>

int verificaRighe(int matrice[3][3]){

    int somma1=0,somma2=0,somma3=0;
    for(int i = 0 ; i <3; i++){
        
          somma1=somma1+ matrice[0][i];
          somma2=somma2+ matrice[1][i];
          somma3=somma3+ matrice[2][i];

        }
        
    
    if(somma1==somma2 && somma2==somma3)
            return somma1;
    else return 0; 
}

int verificaColonne(int matrice[3][3]){

    int somma1=0,somma2=0,somma3=0;
    for(int i = 0 ; i <3; i++){
        
          somma1=somma1+ matrice[i][0];
          somma2=somma2+ matrice[i][1];
          somma3=somma3+ matrice[i][2];
        
    }
    if(somma1==somma2 && somma2==somma3)
            return somma1;
    else return 0; 
}

int verificaDiagonali(int matrice[3][3]) {
    int sommaDiagonalePrincipale=0;
    int sommaDiagonaleSecondaria=0;

    for (int i = 0; i < 3; i++) {
        sommaDiagonalePrincipale=sommaDiagonalePrincipale+matrice[i][i];
        sommaDiagonaleSecondaria=sommaDiagonaleSecondaria+matrice[i][2 - i];
    }

    if (sommaDiagonalePrincipale==sommaDiagonaleSecondaria)
        return sommaDiagonalePrincipale;
    else
        return 0;
}

int main(){


int quadrato[3][3]={{8,1,6},{3,5,7},{4,9,2}};

if (verificaColonne(quadrato) != 0 && verificaRiga(quadrato) != 0 && verificaDiagonali(quadrato) != 0 && verificaColonne(quadrato) == verificaDiagonali(quadrato) && verificaDiagonali(quadrato) == verificaRiga(quadrato)) { 
    printf("E' un quadrato magico");
}
else printf("non e' un quadrato magico");

}