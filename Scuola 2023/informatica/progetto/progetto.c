/*    
    Come progetto vogliamo realizzare un semplice REGISTRO ELETTRONICO da utilizzare nella fase dei pre-scrutini,
    con la possibilità di gestire l’anagrafica studenti, la gestione dei voti e delle assenze. 
    Il sistema dovrà permettere di agevolare i docenti alla fine dell’anno a prepararsi per gli scrutini,
    per avere subito a disposizione le medie degli studenti, in modo da individuare subito le situazioni critiche. 

    Requisiti funzionali:
    · Possibilità di caricare l’anagrafica degli studenti
    · Possibilità per ogni docente di caricare il voto della propria materia e il numero di assenze per ogni studente dell’elenco
    · Creare un report a partire dai dati inseriti che contenga, per ogni studente,
    la media per ogni materia, la media totale, il numero totale di ore di assenza, l’indicazione del numero di materie insufficienti.
*/

#define MAX_STUDENTI 30
#define MAX_MATERIE 8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char nome[20];
    char cognome[20];
}Anagrafica;

typedef struct {
    Anagrafica studente;
    int voto[MAX_MATERIE];
    int assenze[MAX_MATERIE];
} Voto;

void inserisciAnagrafica(Anagrafica array[], int n) { //la parentesi tonda definisce essa una funzione
    FILE * anagrafica  = fopen("anagrafica.txt", "w");
    
    if(anagrafica == NULL) {
        printf("Errore nell'apertura del file");
        exit(1);
    }
    fprintf(anagrafica, "%d\n", n); //la prima riga del file contiene il numero degli studenti( file anagrafica.txt)
    for(int i = 0; i < n; i++) { //da uno a n, n fatto inserire dall' utente = numero degli studenti
        printf("Inserisci il nome dello studente %d: ", i + 1 );
        scanf("%s", array[i].nome);
        fprintf(anagrafica, "%s\t", array[i].nome);
        printf("Inserisci il cognome dello studente %d: ", i + 1 );
        scanf("%s", array[i].cognome);
        fprintf(anagrafica, "%s\n", array[i].cognome);
    }
    fclose(anagrafica);
}

int inserisciVoti(Voto array[], int n, Anagrafica studenti[], int nMat, char meterie[][20]) {
    int j = 0;
    int scelta = 0; 
    char materia[20];
    FILE * voti  = fopen("voti.txt", "a");
    if(voti == NULL) {
        printf("Errore nell'apertura del file");
        exit(1);
    }
   
    for (int i = 0; i < n; i++){
        strcpy(array[i].studente.nome, studenti[i].nome);
        strcpy(array[i].studente.cognome, studenti[i].cognome);
    }   

    do{
        printf("Vuoi inserire i voti degli studenti? (1 = si, 0 = no): ");
        scanf("%d", &scelta);
        if(scelta == 0) {
            break;
        }
        nMat++;
        if(nMat < MAX_MATERIE){
            printf("Scegli la materira di cui vuoi inserire i voti: \n");
            scanf("%s",meterie[nMat]); 
            fprintf(voti,"%s\n", meterie[nMat]);
            for(int i = 0; i < n; i++) {
                printf("Inserisci il voto di %s %s: ",array[i].studente.nome, array[i].studente.cognome);
                scanf("%d", &array[i].voto[j]);
                printf("Inserisci il numero di assenze dello studente: ");
                scanf("%d", &array[i].assenze[j]);
                fprintf(voti,"%s %s  %d  %d \n",array[i].studente.nome, array[i].studente.cognome, array[i].voto[j], array[i].assenze[j]);
                j++;
        }
    }
    }
    while(scelta == 1);
    fclose(voti);

    return nMat;
}
void creaReport(int n, int nMat) {
    Voto array[MAX_STUDENTI];
    FILE * voti = fopen("voti.txt", "r");
    char materie[MAX_MATERIE][20];
    int sommaVoti = 0;
    int materieInsfunicienti = 0;
    FILE * report = fopen("report.txt", "w");
    if(report == NULL) {
        printf("Errore nell'apertura del file");
        exit(1);
    }
    if(voti == NULL) {
        printf("Errore nell'apertura del file");
        exit(1);
    }
    for(int i = 0; i < nMat; i++) {
        fscanf(voti,"%s",materie[i]);    
        for(int j = 0; j < n; j++) 
        fscanf(voti,"%s %s %d %d", array[i].studente.nome, array[i].studente.cognome, &array[j].voto[i], &array[j].assenze[i]);
    }
     for(int i = 0; i < n; i++) {
        fprintf(report, "Studente %s %s\n", array[i].studente.nome, array[i].studente.cognome);
        materieInsfunicienti = 0;
        sommaVoti = 0;
        for(int j = 0; j < nMat; j++) {

            fprintf(report, "Materia %s Voto %d, Assenze %d\n", materie[j], array[i].voto[j], array[i].assenze[j]);
            sommaVoti += array[i].voto[j];
            if(array[i].voto[j] < 6) {
                materieInsfunicienti++;
            }
        }
        float mediaVoti = (float)sommaVoti / nMat;
        fprintf(report, "Media voti: %.2f, Materie insufficienti: %d\n", mediaVoti, materieInsfunicienti);
    }
    fclose(report);
    fclose(voti);
}
int main() {          
    char meterie[MAX_MATERIE][20];
    int nMaterie = 0;
    int nMaterieFile;
    int scelta; //variabile per voti
    Anagrafica studenti[MAX_STUDENTI];
    Voto voti[MAX_STUDENTI];
    int n_studenti; // numero di studenti
    int nStudFile;
    FILE * anagrafica = fopen("anagrafica.txt", "r");

    fscanf(anagrafica,"%d", &nStudFile);
    if(anagrafica == NULL) {
        printf("Errore nell'apertura del file");
        exit(1);
    }
    //nota bene : il file anagrafica.txt deve avere 0 inserito di base alla prima esecuzione 
    if(nStudFile == 0) { // di base il file ha inserito 0 all' inziio , ovvero il numero di studenti iniziale
        printf("Inserisci il numero di studenti: ");
        scanf("%d", &n_studenti);
        inserisciAnagrafica(studenti, n_studenti);
    }    
    else {
        n_studenti = nStudFile;
        for(int i = 0; i < n_studenti; i++) {
            fscanf(anagrafica, "%s", studenti[i].nome);
            fscanf(anagrafica, "%s", studenti[i].cognome);
        }
    }
    printf("Studenti inseriti correttamente\n");
    fclose(anagrafica);
    
    if(nMaterie<MAX_MATERIE){
        nMaterieFile = inserisciVoti(voti, n_studenti, studenti, nMaterie,meterie);
        printf("Voti inseriti correttamente\n");
        nMaterie = nMaterieFile;
    }
    printf("Vuoi creare il report? (1 = si, 0 = no): ");
    scanf("%d", &scelta);
    if(scelta == 1) {
    creaReport( n_studenti, nMaterie);
    printf("Report creato correttamente\n");
    }
    return 0;
}