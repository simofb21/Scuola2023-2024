#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

// ordinamento crescente selection sort 
void selectionSortString(char stringa[], int lun) {
  int x, y, i_min;
  int temp;
  // ricerca il minimo
  for (x = 0; x < lun - 1; x++) {   
    i_min = x;                        // ipotesi primo come minimo 
    for (y = x + 1; y < lun; y++){  // per la parte dx del vettore
      if (stringa[y] < stringa[i_min])  	// se l'elemento e' minore 
        i_min = y;                    // indice nuovo minimo  
    }
    // scambia elemento corrente con il minore trovato 
    temp = stringa[i_min];              
    stringa[i_min] = stringa[x];
    stringa[x] = temp;
  }
}
void bubbleSortString(int lunghezza, char stringa[]){
    int cambi, i;
    char temp;
    do{
        cambi=0;
        for(i = 0; i < lunghezza-1; i++){
            if(stringa[i]>stringa[i+1]){
                temp=stringa[i];
                stringa[i]=stringa[i+1];
                stringa[i+1]=temp;
                cambi=1;
            }
        }
    }
    while(cambi==1);
}

int main(){
    char parola1[]="pietra";
    char parola2[]="aperti";

	printf("%s <-> %s\n",parola1,parola2);

    selectionSortString(parola1,strlen(parola1));
    selectionSortString(parola2,strlen(parola2));

    if(strcmp(parola1,parola2)==0)
        printf("le due parole sono anagrammi");
    else 
        printf("le 2 parole non sono anagrammi");
    return 0;

}