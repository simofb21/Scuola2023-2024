/*
fusar bassini simone  3IC
checkIN.c
CONSEGNA:Il programma usato negli aeroporti per fare il checkin: è possibile accedere sei hai la carta di imbarco e il documento di identità valido.

*/
#include <stdio.h>
int main(){
	char i,c;		//i c di identità c carta di imbarco
	printf("Sei in possesso di carta di identita? (T/F?)\n");
	scanf(" %c",&i);
	printf("Sei in possesso di carta di imbarco? (T/F?)\n");
	scanf(" %c",&c);
	if( ((c=='T')||(c=='t'))&&((i=='T')||(i=='t'))){
		printf("CHECK IN VALIDO");
	}
	else {
		printf("CHECK IN NON VALIDO");
	} return 0;
}
