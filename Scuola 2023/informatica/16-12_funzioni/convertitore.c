// fusar bassini simone : convertitore; nel main chiedo che scelta vuoi fare, poi faccio le funzioni;

#include <stdio.h>
#define CM_INCH 2.54
#define GALL_L 0.2641
#define CONST_CEL 1.8
//da cm a pollici
void cmToInch(float valoreCM){
    float valoreInch;
   
    printf("Inserisci il valore in Centimetri ");
    scanf("%f",&valoreCM);
     valoreInch=valoreCM/CM_INCH;
     printf("Il valore in pollici e': %f\n",valoreInch);
    }

// da pollici a cm
void inchToCM(float valoreInch){
    float valoreCm;
    printf("Inserisci il valore in pollici ");
    scanf("%f",&valoreInch);
     valoreCm=valoreInch*CM_INCH;
     printf("Il valore convertito in cm e' %f\n",valoreCm);
}

//da litri a galloni

void lToGall(float litri){
    float gall;
    printf("Inserisci il valore in Litri ");
    scanf("%f",&litri);
    gall=GALL_L*litri;
    printf("Il corrispettivo valore in Galloni e' : %f\n",gall);
}

//da galloni a litri

void g_L(float gal){
    float litr;
    printf("Inserisci il valore in Galloni ");
    scanf("%f",&gal);
    litr=gal/GALL_L;
    printf("Il corrispettivo valore in litri e' %f\n",litr);
}

//da celsius a farhenheit

void cToFar(float celsius){
    float far;
    printf("Inserisci il valore in Celsius ");
    scanf("%f",&celsius);
    far=celsius*CONST_CEL+32;
    printf("Il corrispottivo valore in Fahrenheit e' %f\n",far);
}
// da farhenhei a celsius
void far_c(float far){
    float cel;
    printf("Inserisci il valore in fahrenheit ");
    scanf("%f",&far);
    cel=(far-32)*CONST_CEL;
    printf("Il corrispottivo valore in Celsius e' %f \n",cel);
}

int main(){
    int selezione,i;
    float valore;
    while(selezione!=7)       //for : in modo che posso fare più di una scelta. ne  posso fare 100
    {
        printf("Cosa vuoi fare?\n 1) centimetri -> pollici 2) pollici -> centrimetri 3) litri -> galloni 4) galloni -> litri 5) celsius -> fahrenheit 6) fahrenheit -> celsius 7) fine\n");
        scanf("%d",&selezione);
    
        //switch selezione:

        switch (selezione)
        {
        case 1:
            cmToInch(valore);
            break;
        case 2:
            inchToCM(valore);
            break;
        case 3: 
            lToGall(valore);
            break;
        case 4:
            g_L(valore);
            break;
        case 5:
            cToFar(valore);
            break;
        case 6:
            far_c(valore);
            break;
        case 7:
            printf("Fine!!");
            break;
        default:
            printf("Non hai scelto qualcosa che faccia qualcosa   ");
            break;
        }
    }
    
   
}