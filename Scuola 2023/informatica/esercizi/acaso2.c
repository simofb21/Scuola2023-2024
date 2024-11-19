//Calcolare l'età in giorni. 
//Dichiarare una variabile per l'età in anni, calcolare l'età in giorni assumendo che un anno abbia 365 giorni, e stampare il risultato.
#define YEAR 365
#define MOUNTH 30
int main(){
	int eta,anni,mesi,giorni,nGiorni;
	printf("Inserisci la data di nascita nel formato giorno/mese/anno \n" );
	scanf("%d/%d/%d",&giorni,&mesi,&anni);
	eta=2023-anni;
	nGiorni=(eta-1)*YEAR+(MOUNTH*mesi)+giorni;
	printf("La  tua eta' di %d corrisponde a %d giorni di vita \n",eta,nGiorni);
}
