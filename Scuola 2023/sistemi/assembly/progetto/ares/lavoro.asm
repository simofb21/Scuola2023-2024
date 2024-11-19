.MODEL small
.STACK 100h
.DATA
    base_input DW ?                     ; valore della base
    altezza_input DW ?                  ;valore altezza (inserita da tastiera come la base)
    prompt_base DB 'Inserisci la base: $'     ; Prompt per chiedere all'utente di inserire la base
    prompt_altezza DB 'Inserisci la altezza: $'   ; Prompt per chiedere all'utente di inserire l'altezza
    newline DB 10,13,'$'                ; per andare a capo
    error_msg DB 'Numero non valido. Reinseriscilo!$'   ; Messaggio di errore per input non valido
    temp DW 0h                          ; Variabile temporanea per funzione
    area_msg DB 'La area del rettangolo e: $ '     ; Messaggio per la stampa dell'area
    perimeter_msg DB 'Il perimetro del rettangolo e: $ '   ; Messaggio per la stampa del perimetro
    ten DW 10                           ; la uso nelle funzioni 

.CODE
.STARTUP

    MOV AX, @data                      ; Inizializza data segment
    MOV DS, AX                         ; Imposta il registro DS al data segment

    ; Input della base
    MOV AH, 09h                        ; funzione dos stampa stringa
    LEA DX, prompt_base                ; Carica l'indirizzo del prompt_base in DX
    INT 21h                      ; Chiama l'interrupt per stampare il prompt
riInserisciBase: ;etichetta in cui si entra sempre, ma in cui ci torno nel caso di errore
    CALL leggi                        ; funzione per input da tastiera
    MOV base_input, BX                ; la funzione ha messo in bx il risultato, che io sposto nella sua variabile (era la base)
    LEA DX,newline
    MOV AH, 09h            ;vado a capo
    int 21h
    CMP BX, -1                        ; verifica validita input
    JE base_input_error               ; Se l'input e -1, salta a base_input_error
    

    ; Input dell'altezza
    MOV AH, 09h                       
    LEA DX, prompt_altezza            
    INT 21h                           ; funzione dos per stampa stringa(messaggio prompt per inserire h)
riInscerisciAlt:  ;etichetta in cui si entra sempre, ma in cui ci torno nel caso di errore
    CALL leggi                        ; Chiama la procedura per leggere l'input
    MOV altezza_input, BX             ; Memorizza l'input dell'altezza, che precedentemente era stato messo dalla funzione in BX
    LEA DX,newline
    MOV AH, 09h           ;a capo
    int 21h
    CMP BX, -1                         ; verifica validita input
    JE altezza_input_error            ; Se l'input e -1, salta a altezza_input_error

    ; Calcolo e stampa dell'area
    MOV AX, base_input                ; Carica la base in AX, operando per MUL
    MUL altezza_input                 ; Moltiplica la base per l'altezza
    MOV BX, AX                        ; Memorizza il risultato in BX  , per poi passarlo a funzione di stampa
    LEA DX, area_msg                  
    MOV AH, 09h                       
    INT 21h                           ; prompt che arrivera area
    CALL stampa                      ; Chiama la procedura per stampare il risultato
    LEA DX, newline                   
    MOV AH, 09h                       
    INT 21h                           ; a capo

    ; Calcolo e stampa del perimetro
    MOV AX, base_input                ; Carica la base in AX per somma
    ADD AX, altezza_input             ; Aggiunge l'altezza a AX
    ADD AX, base_input                ; Aggiunge di nuovo la base a AX
    ADD AX, altezza_input             ; Aggiunge di nuovo l'altezza a AX
    MOV BX, AX                        ; Memorizza il risultato in BX per funzione stampa
    LEA DX, perimeter_msg             ;avvisa che arrivera risultato di perimetro
    MOV AH, 09h                       
    INT 21h                           
    CALL stampa                      ; Chiama la procedura per stampare il risultato, ossia quanto messo in BX
    LEA DX, newline                   
    MOV AH, 09h                       
    INT 21h                           ;  a capo

    JMP end_program                   ; Salta alla fine del programma

base_input_error:
    LEA DX, error_msg                 ; stampa msg di errore
    MOV AH, 09h                       
    INT 21h                           
    JMP riInserisciBase               ; Salta a riInserisciBase per richiedere nuovamente l'input della base

altezza_input_error:
                          ; Chiama l'interrupt per stampare la nuova riga
    LEA DX, error_msg                 
    MOV AH, 09h                       
    INT 21h                           ;stampa messaggio di errore
    JMP riInscerisciAlt               ; Salta a riInscerisciAlt per richiedere nuovamente l'input dell'altezza

end_program:
    MOV AH, 4ch                       ; Imposta AH per il servizio di uscita
    INT 21h                           ; Chiama l'interrupt per uscire dal programma

leggi PROC
    PUSHA                             ; Salva i registri sullo stack
    MOV BX, 0                         ; Inizializza BX a 0
read_loop:
    MOV AH, 01h                       ; Imposta AH per il servizio di input carattere
    INT 21h                           ; Chiama l'interrupt per leggere un carattere
    CMP AL, 0Dh                       ; Controlla se il carattere letto è un ritorno a capo
    JE finish_read                    ; Se si, termina il loop
    CMP AL, 48                        ; Controlla se il carattere letto è < '0'
    JB not_digit                      ; Se si, salta a not_digit
    CMP AL, 57                        ; Controlla se il carattere letto è > '9'
    JA not_digit                      ; Se si, salta a not_digit
    PUSH AX                           ; Salva il carattere letto nello stack
    MOV AX, BX                        ; Carica BX in AX
    MUL ten                           ; Moltiplica AX per 10
    MOV BX, AX                        ; Memorizza il risultato in BX
    POP AX                            ; Ripristina il carattere letto da dello stack
    SUB AL, 30h                       ; Converti il carattere in numero
    MOV AH, 0                         ; Imposta AH a 0
    ADD BX, AX                        ; Aggiungi il numero a BX
    JMP read_loop                     ; Torna al loop per leggere il prossimo carattere

not_digit:
    MOV BX, -1                        ; Se il carattere non è un numero, imposta BX a -1 e termina

finish_read:
    MOV temp, BX                      ; Memorizza il risultato in temp
    POPA                              ; Ripristina i registri dallo stack
    MOV BX, temp                      ; Carica il risultato da temp a BX
    RET                               ; Ritorna al chiamante
leggi ENDP

stampa PROC
    PUSHA                             ; Salva i registri sullo stack
    MOV AX, BX                        ; Carica il valore da stampare in AX
    MOV CX, 00                        ; Inizializza CX a 0
print_loop:
    MOV DX, 00                        ; Inizializza DX a 0
    DIV ten                           ; Dividi AX per 10, risultato in AX, resto in DX
    PUSH DX                           ; Pusha il resto nello stack
    INC CX                            ; Incrementa CX
    CMP AX, 00                        ; Controlla se AX è 0
    JNE print_loop                    ; Se non è zero, torna a print_loop
print_digit:
    POP DX                            ; Popa il resto dallo stack
    ADD DL, 30h                       ; Converti il resto in carattere ASCII
    MOV AH, 02h                       ; Imposta AH per il servizio di output carattere
    INT 21h                           ; Chiama l'interrupt per stampare il carattere
    DEC CX                            ; Decrementa CX
    JNZ print_digit                   ; Se CX non è zero, torna a print_digit
    POPA                              ; Ripristina i registri dallo stack
    RET                               ; Ritorna al chiamante
stampa ENDP

END
