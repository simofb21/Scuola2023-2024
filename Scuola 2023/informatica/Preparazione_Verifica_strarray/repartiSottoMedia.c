#include <stdio.h>

#define NREPARTI 4

float media(int vendite[NREPARTI]){
	float somma=0.0;
	for(int i=0; i<NREPARTI; i++){
		somma+=vendite[i];
	}
	return somma/NREPARTI;
}

int main(){
	int vendite[NREPARTI];
	char nomi[NREPARTI][15];
	
	for(int i=0; i<NREPARTI; i++){
		printf("Inserisci il nome del reparto: ");
		scanf("%s",nomi[i]);
		printf("Inserisci il numero di vendite di quel reparto: ");
		scanf("%d",&vendite[i]);
	}
	printf("----------------\nElenco reparti sotto la media:\n");
	for(int j=0; j<NREPARTI; j++){
		if(vendite[j]<=media(vendite))
			printf("%s",nomi[j]);
		
	}
	
}