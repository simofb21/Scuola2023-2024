#include <stdio.h>
#include <string.h>

#define MAX_PERSONE_ENTRANO 10
int numeroElementi = 0;

void inserimento(char listaAccesso[MAX_PERSONE_ENTRANO][20]) {
    char sn;
    while (1) {
        printf("Inserisci il nome della persona ");
        scanf("%s", listaAccesso[numeroElementi]);
        printf("Desideri inserire altre persone ? s/n\n");
        scanf(" %c", &sn);
        if (sn != 's' && sn != 'S')
            break;
        else
            numeroElementi++;
    }
}

void cancellazione(char listaAccesso[MAX_PERSONE_ENTRANO][20]) {
    char nomeCanc[20];
    char sn;
    int nEl = numeroElementi;

    while (1) {
        printf("Inserisci il nome della persona da cancellare ");
        scanf("%s", nomeCanc);
        int found = 0;
        for (int i = 0; i < nEl; i++) {
            if (strcmp(nomeCanc, listaAccesso[i]) == 0) {
                found = 1;
                for (int j = i; j < nEl - 1; j++) {
                    strcpy(listaAccesso[j], listaAccesso[j + 1]);
                }
                numeroElementi--;
                break;
            }
        }
        if (!found) {
            printf("Persona non trovata nella lista.\n");
        }
        printf("Desideri cancellare altre persone ? s/n");
        scanf(" %c", &sn);
        if (sn != 's' && sn != 'S')
            break;
    }
}

void controlloLista(char listaAccesso[MAX_PERSONE_ENTRANO][20]) {
    char nomeCheck[20];
    printf("Inserisci il nome da controllare in lista : ");
    scanf("%s", nomeCheck);
    for (int i = 0; i < numeroElementi; i++) {
        if (strcmp(nomeCheck, listaAccesso[i]) == 0) {
            printf("Il tuo nome e' in lista ");
            return; // exit the function once found
        }
    }
    printf("Il tuo nome non e' in lista.\n");
}

int main() {
    int scelta;
    int flag = 1;
    char listaAccesso[MAX_PERSONE_ENTRANO][20];
    while (flag == 1) {
        printf("Fai la tua scelta: \n 1) Inserire una persona in lista \n 2) Eliminare una persona dalla lista \n 3) Controllare se un nome e' presente nella lista \n 4) Stampare la lista in ordine di inserimento \n 5) Svuotare la lista\n 6) Uscire dal menu\n");
        scanf("%d", &scelta);

        switch (scelta) {
            case 1:
                inserimento(listaAccesso);
                break;

            case 2:
                cancellazione(listaAccesso);
                break;

            case 3:
                controlloLista(listaAccesso);
                break;

            case 4:
                printf("Ecco l' elenco delle persone in lista ");
                for (int k = 0; k < numeroElementi; k++) {
                    printf("Nome %d : %s \n", k + 1, listaAccesso[k]);
                }
                break;

            case 5:
                for (int j = 0; j < numeroElementi; j++) {
                    strcpy(listaAccesso[j], " ");
                }
                numeroElementi = 0;
                break;

            case 6:
                flag = 0;
                break;
        }
    }
    return 0;
}
