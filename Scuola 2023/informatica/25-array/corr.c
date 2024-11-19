#include <stdio.h>

#define PARTITE 4

void leggi_goal(int array[], int size) {
	
	int i;
	
	for (i=0; i<size; i++) {
		printf ("Inserisci il numero di goal nella partita %d: ",i+1);
		scanf ("%d",&array[i]);
	}
}

int somma_goal(int array[], int size) {
	
	int i,somma=0;
	
	for (i=0; i<size; i++) {
		somma=somma+array[i];
	}
	
	return somma;
}

int max_goal_partita(int array1[], int array2[], int partita, int size) {
	
	int i;
	int max1=0,max2=0;
	
	if (array1[partita]==array2[partita]) {
		return 0;
	}
	else {
		if (array1[partita]>array2[partita]){
			return 1;
		}
		else {
			return 2;
		}
	}		
}

int ricerca_goal_giocatore(int array[], int size, int goal) {
	
	int i;
	
	for (i=0; i<size; i++) {
		if (goal==array[i]) {
			return i+1;
		}
	}
	
	return 0;
	
}

int main () {
	
	int g1[PARTITE],g2[PARTITE];
	int somma1,somma2;
	float media1,media2;
	int max,partita;
	int ricerca1,ricerca2,goal1,goal2;
	
	printf("\nGiocatore 1:\n\n");
	leggi_goal(g1, PARTITE);
	
	printf("\n\nGiocatore 2:\n\n");
	leggi_goal(g2, PARTITE);
	
	printf("\n-------------------------------------------------------\n");
	
	somma1 = somma_goal(g1, PARTITE);
	printf("\nIl totale dei goal del giocatore 1 e': %d\n",somma1);

	somma2 = somma_goal(g2, PARTITE);
	printf("\nIl totale dei goal del giocatore 2 e': %d\n",somma2);	
	
	printf("\n-------------------------------------------------------\n");
	
	media1 = (float) somma1/PARTITE;
	printf("\nLa media di goal a partita del giocatore 1 e': %f\n",media1);	
	
	media2 = (float) somma2/PARTITE;
	printf("\nLa media di goal a partita del giocatore 2 e': %f\n",media2);	
	
	printf("\n-------------------------------------------------------\n");
	
	printf("\nScegliere per quale partita verificare il miglior marcatore: ");
	scanf("%d",&partita);

	partita = partita-1;
	max = max_goal_partita(g1,g2,partita,PARTITE); 
	
	if (max==0)	{
		printf("\nNella partita %d entrambi i giocatori hanno segnato lo stesso numero di goal\n",partita+1);
	}
	else {
		if (max==1) {
			printf("\nNella partita %d il giocatore 1 ha segnato piu' goal rispetto al giocatore 2\n",partita+1);
		}
		else {
			printf("\nNella partita %d il giocatore 2 ha segnato piu' goal rispetto al giocatore 1\n",partita+1);
		}
	}
	
	printf("\n-------------------------------------------------------\n");	
	
	printf("\nInserire il numero di goal da trovare per il giocatore 1: ");
	scanf("%d",&goal1);
	
	ricerca1 = ricerca_goal_giocatore(g1,PARTITE,goal1);
	
	if (ricerca1==0) {
		printf("\nIl giocatore 1 non ha mai segnato %d goal\n",goal1);
	}
	else {
		printf("\nIl giocatore 1 ha segnato %d goal nella partita %d\n",goal1,ricerca1);
	}

	printf("\n-------------------------------------------------------\n");	
	
	printf("\nInserire il numero di goal da trovare per il giocatore 2: ");
	scanf("%d",&goal2);
	
	ricerca2 = ricerca_goal_giocatore(g2,PARTITE,goal2);
	
	if (ricerca2==0) {
		printf("\nIl giocatore 2 non ha mai segnato %d goal\n",goal2);
	}
	else {
		printf("\nIl giocatore 2 ha segnato %d goal nella partita %d\n",goal2,ricerca2);
	}

	return 0;
}
