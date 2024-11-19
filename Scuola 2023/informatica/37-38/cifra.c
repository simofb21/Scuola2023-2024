
// Funzione per cifrare il testo con un alfabeto cifrante
void cifraMessaggio(const char testo[], const char alfabetoCifrante[], char testoCifrato[]) {
    int lunghezza = strlen(testo);
    for (int i = 0; i < lunghezza; i++) {
            int indice = testo[i] - 'a';  // Calcola l'indice corrispondente nell'alfabeto cifrante
            // Sostituisci il carattere con quello corrispondente nell'alfabeto cifrante
            testoCifrato[i] = alfabetoCifrante[indice];
    }
    testoCifrato[lunghezza] = '\0';  // Aggiungi il terminatore null alla fine della stringa cifrata
}

// Funzione per decifrare il testo con un alfabeto cifrante
void decifraMessaggio(const char testoCifrato[], const char alfabetoCifrante[], char testoDecifrato[]) {
    int lunghezza = strlen(testoCifrato);
    for (int i = 0; i < lunghezza; i++) {
            int indice = 0;
            // Trova l'indice corrispondente nell'alfabeto cifrante per la decifrazione
            while (alfabetoCifrante[indice] != testoCifrato[i]) {
                indice++;
            }
            // Sostituisci il carattere con quello corrispondente nell'alfabeto originale
            testoDecifrato[i] = 'a' + indice;     
    }
    testoDecifrato[lunghezza] = '\0';  // Aggiungi il terminatore null alla fine della stringa decifrata
}

int main() {

    // Alfabeto cifrante per la codifica o decodifica
    const char alfabetoCifrante[] = "qwertyuiopasdfghjklzxcvbnm";
    // Testo da cifrare
    const char testo[] = "ciaomondo";
    // Alloca spazio per il testo cifrato e decifrato
    char testoCifrato[strlen(testo) + 1];
    char testoDecifrato[strlen(testo) + 1];

    // Cifra il testo con l'alfabeto cifrante
    printf("Testo originale: %s\n", testo);
    cifraMessaggio(testo, alfabetoCifrante, testoCifrato);
    // Stampa il testo cifrato
    printf("Testo cifrato: %s\n", testoCifrato);
    
    // Decifra il testo cifrato con l'alfabeto cifrante
    decifraMessaggio(testoCifrato, alfabetoCifrante, testoDecifrato);
    // Stampa il testo decifrato
    printf("Testo decifrato: %s\n", testoDecifrato);

    return 0;
} 

