/*
fusar bassini simone  3IC
camera.c
CONSEGNA:L'ingresso ad una stanza è possibile se il soggetto indossa i guanti oppure si è lavato le mani. 
In ogni caso è necessario possedere la chiave.
Scrivi un programma che chiede all'utente le tre condizioni e al termine comunica se può accedere oppure no alla stanza.
*/
#include <stdio.h>
int main(){
	char g,c,l;		// g guanti c chiavi l lavato mani
	printf("Hai lavato le mani? (T/F?)\n");
	scanf(" %c",&l);
	printf("Hai indossato i guanti? (T/F?)\n");
	scanf(" %c",&g);
	printf("Se in possesso delle chiavi? (T/F?)\n");
	scanf(" %c",&c);
	
	if( (((c=='t')||(c=='T'))&&(g=='t')||(g=='T'))||(l=='t')||(l=='T')){
		printf("CHECK IN VALIDO");
	}
	else {
		printf("CHECK IN NON VALIDO");
	} return 0;
}
