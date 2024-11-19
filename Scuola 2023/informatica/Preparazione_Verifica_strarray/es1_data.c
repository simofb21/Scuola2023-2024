#include <stdio.h>

#define T_PER_DAY 2
#define GIORNI 7

void tempMedia (float temperatureMinMax[GIORNI][T_PER_DAY], float tMedia[GIORNI]){
	for(int i=0; i<GIORNI; i++){
		for(int j=0;j<T_PER_DAY; j++){
			tMedia[i]+=temperatureMinMax[i][j];
		}
		
	}
	for(int k=0; k<GIORNI; k++){
		tMedia[k]=tMedia[k]/T_PER_DAY;
	}
	
}

int main(){

    float temperatureMinMax[GIORNI][T_PER_DAY];
    int j=0;
    float tMedia[GIORNI]={0.0};
	for(int i=0; i<GIORNI; i++){
		printf("Inserisci la temperatura minima del giorno %d: ",i+1);
		scanf("%f",&temperatureMinMax[i][j]);
	}
	j++;
	for(int k=0; k<GIORNI; k++){
		printf("Inserisci la temperatura massima del giorno %d: ",k+1);
		scanf("%f",&temperatureMinMax[k][j]);
	}
	tempMedia(temperatureMinMax,tMedia);
	
	for(int q=0; q<GIORNI; q++){
		printf("GIORNO %d TEMPERAURA MEDIA %.2f\n",q+1,tMedia[q]);
	}
	
    

}