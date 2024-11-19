/*
Sasso Carta forbice in c*/
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <stdlib.h>
int main(){
    char sceltaUtente,punteggio;
    bool sassoUser,cartaUser,forbiceUser,sassoBot,cartaBot,forbiceBot;
    int puntiUser=0,puntiBot=0,randomScelta,i;
    srand(time(0));
    printf("La partita finirà quando  uno saranno state svolte 10 sfide, dopodiche sarà comunicato il vincitore\n");

        for(i=1;i<=10;i++){
        	printf("\n\n");
                sassoUser=false; cartaUser=false; forbiceUser=false; sassoBot=false; cartaBot=false; forbiceBot=false;      //all' inizio di ogni ciclo pongo i bool false
                printf("Fai la tua scelta: c||C e' carta, s||S e' sasso, f||f = forbice\n");
                scanf(" %c",&sceltaUtente);
                
                    if(sceltaUtente=='s'||sceltaUtente=='S')   {   //controllo scelta utente
                        printf("Tua scelta:SASSO\n");
                        sassoUser=true;}
                    else if(sceltaUtente=='c'||sceltaUtente=='C'){
                        printf("Tua scelta : CARTA\n");
                        cartaUser=true;}
                    else if(sceltaUtente=='f'||sceltaUtente=='F'){
                        printf("Tua scelta: FORBICE\n");   
                        forbiceUser=true;
                    }
                    randomScelta=rand()%2;      //se la scelta sarà 0: sasso, 1 forbicie, 2 carta
                    if (randomScelta==0){
                        printf("Scelta del computer: SASSO\n");
                        sassoBot=true;
                    }
                    if (randomScelta==1){
                        printf("Scelta del computer: FORBICE\n");
                        forbiceBot=true;
                    }
                    if (randomScelta==2){
                        printf("Scelta del computer: CARTA\n");
                        cartaBot=true;
                    }

                    printf("Un punto per....");         //calcolo punteggio 

                        if ((cartaBot&&cartaUser)||(forbiceBot&&forbiceUser)||(sassoBot&&sassoUser))    //caso pareggio  
                            printf("Nessuno: SI TRATTA DI UN PAREGGIO\n");
                      else  if ((cartaBot&&sassoUser)||(sassoBot&&forbiceUser)||(forbiceBot&&cartaUser)){           //punti al bot
                                printf("Il bot \n");
                                puntiBot+=1;
                        }
                       else if ((cartaBot&&forbiceUser)||(sassoBot&&cartaUser)||(forbiceBot&&sassoUser)){           //punti al user
                                printf("Te\n");
                                puntiUser+=1;
                        }else{
                        	printf("Se sbagli a scegliere mi regali un punto\n");
                        	puntiBot+=1;	
							}
						   }                                       
                    printf("\nLa partita e' finita:\n");
                    if(puntiUser<puntiBot)
                        printf(" Vittoria per Il bot\n");
                    else if (puntiUser==puntiBot)
                        printf("Si tratta di un pareggio\n ");
                    else 
                        printf("Vittoria per te \n");

                    printf("Vuoi sapere con precisione il punteggio? S se vuoi.\n");
                    scanf(" %c",&punteggio);
                    if (punteggio=='S'){
                        printf("Il tuo punteggio e' : %d , il punteggio del Bot e' %d\n",puntiUser,puntiBot);
                    }
                    printf("Grazie per aver giocato");
    
}