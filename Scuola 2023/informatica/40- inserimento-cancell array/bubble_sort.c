

#include <stdio.h>
#include <stdlib.h>     // srand, rand 
#include <time.h>       // time 

const int MAX   = 89;  // valore massimo casuale
const int TANTI = 12;  // lunghezza array

void mostraVettore(int vet[], int lun){
  int i;
  for (i = 0; i < lun; i++)
    printf("%d ",vet[i]);
  printf("\n");
}

void riempiCasuale(int vet[], int lun){
  int i;
  srand((unsigned)time(NULL));   
  for (i = 0; i < lun; i++)     
    vet[i] = (rand() % MAX)+10;   
}

// ordinamento crescente bubble sort semplice
void bubbleSort1(int vet[], int lun) {
  int temp;
  for (int x = 0; x < lun - 1; x++){  // ripeti confronto per lun-1 volte
    for (int y = 0; y < lun - 1; y++){   // confronto tutti a coppie
      if (vet[y] > vet[y + 1]){
        // scambio
        temp = vet[y];
        vet[y] = vet[y + 1];
        vet[y + 1] = temp;
      }
       mostraVettore(vet, lun);    // visualizza il vettore 
    }
	}
}

// ordinamento crescente bubble sort migliorato
void bubbleSort2(int vet[], int lun) {
int x, y, temp;
  for (x = 0; x < lun - 1; x++) {     // ripeti per lun-1 volte
    for (y = 0; y < lun - 1 - x; y++) // li confronto tutti a coppie fino a lun-x
      if (vet[y] > vet[y+1]) {          // se ne trovo uno maggiore
        temp = vet[y];                  // li scambio tra loro    
        vet[y] = vet[y+1];
        vet[y+1] = temp;
      } 
     mostraVettore(vet,TANTI);      // visualizza un passo di ordinamento    
  }   
}

// ordinamento crescente bubble sort con sentinella
void bubbleSort3(int vet[], int lun) {
  int  y, temp;
  int scambi = 0;
  do{                                    // ripeti finche' ci sono scambi 
    scambi = 0;                      // inizializzo sentinella 
    for (y = 0; y < lun - 1; y++){     // ciclo di confronto tutti a coppie 
      if (vet[y] > vet[y + 1]){    // se ne trovo uno maggiore
        temp = vet[y];                // li scambio tra loro    
        vet[y] = vet[y + 1];
        vet[y + 1] = temp;
        scambi = 1;     
        printf("_");        // cambio valore alla sentinella
      }                                    
    }                                     
    mostraVettore(vet, lun);                      // visualizza il vettore 
  }while (scambi == 1);               
}

int main(void) {
  int numeri[TANTI];     // vettore da elaborare  

  riempiCasuale(numeri, TANTI);    
  printf("---------iniziale-------------\n");  // riempi il vettore
  mostraVettore(numeri, TANTI);  printf("----------ordinamento--------\n");   
  // visualizza il vettore 
  bubbleSort3(numeri, TANTI);    
    // ordinamento
  mostraVettore(numeri, TANTI);      // visualizza il vettore 

}
 
