#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	float soldi;
    int simbolo1, simbolo2, simbolo3,totale=0,i;
	char scelta;
    // Imposta il generatore di numeri casuali
    srand(time(NULL));
	do{
	printf("inserisci il credito \n");
	scanf("%f",&soldi);
	totale=totale+soldi; 
	printf("CREDITO: %d  ",totale);
		// Estrai tre numeri casuali tra 0 e 9 per i simboli
    simbolo1 = rand() % 10;
    simbolo2 = rand() % 10;
    simbolo3 = rand() % 10;

    // Stampa i simboli estratti
    printf("Slot Machine: %d %d %d\n", simbolo1, simbolo2, simbolo3);
		
    // Determina se l'utente ha vinto o perso e visualizza il messaggio corrispondente
    if (simbolo1 == simbolo2 && simbolo2 == simbolo3) {
        totale=100+totale;
    } else if (simbolo1 == simbolo2 || simbolo2 == simbolo3 || simbolo1 == simbolo3) {
        totale=50+totale;
    } else {
        printf("Hai perso 100 euro.\n");
        totale=totale-100;
        
    }i=1+i;
     printf("Se ti fermi ora hai vinto %d euro",totale);
 
        if ((totale<0)&&(i>15)){
        	break;
		}else{
			   printf(" \nANCORA?S/N    ");
				scanf(" %c",&scelta);
		}
	}while((scelta=='s'));
    

    return 0;
}
