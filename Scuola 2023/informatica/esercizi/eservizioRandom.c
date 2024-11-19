#include <stdio.h>
#include <stdlib.h>
#include <time.h>
	int main(){
		int v;
		srand(time(0)); //srand per impostare al tempo 0 
		v= rand()%10+1;	//calcolo con rand tra 1 e 10 il numero
		printf("Primo numero generato %d   ",v); // stampo il primo numero
		v= rand()%10+1;
		printf("secondo numero generato %d   "  ,v);
		v= rand()%10+1;
		printf("terzo numero generato %d   "  ,v);
	}

