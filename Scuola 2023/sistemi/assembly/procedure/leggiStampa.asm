.MODEL small 
.DATA
    numero  DW 0h
    stringa DB 'inserisci un numero', 10, 13,' $'  
    a_capo  DB 10,13,'$'
    dieci   DW 10
    temp    DW 0h
.CODE
.STARTUP
 
MOV AH,09h  ;stampa a video stringa per l'utente con servizio DOS 09h
LEA DX,stringa 
INT 21h
 
CALL leggi      ;chiamata procedura che legge il numero da tastiera e lo copia in BX
 
MOV AH,4Ch      ;chiusura programma principale
INT 21h 
;SEZIONE DELLE PROCEDURE
;procedura di LETTURA numero da tastiera
leggi PROC
 
    PUSHA       ;salvataggio di tutti i registri
    MOV BX,0    ;azzero registro di accumulo della cifra a 16 bit
ciclo: 
    MOV AH,01h      ;servizio DOS di lettura da tastiera
    INT 21h         
    CMP AL,0Dh      ;il carattere ASCII letto viene confrontato con INVIO (carattere 13)
 
    JE fine         ;se INVIO premuto la cifra è terminata e salto a fine
 
    PUSH AX         ;salvo il numero letto nello stack
    MOV AX,BX       ;moltiplico per 10 il numero accumulato in BX
    MUL dieci       ;AX * 10
    MOV BX,AX       ;colloco in BX il risultato della moltiplicazione per 10
 
    POP AX          ;riprendo in AX l'ultima cifra letta
    SUB AL,30h      ;la cifra viene aggiustata da ASCII a numero sottraendo 30h
    
    MOV AH,0        ;azzero parte alta di AX
    ADD BX,AX       ;somma del valore accumulato in BX con l'ultima cifra letta
 
    JMP ciclo       ;salto incondizionato al ciclo di lettura da tastiera
fine: 
    MOV temp,BX     ;salvataggio del registro da restituire in uscita nella variabile temporanea 
 
    POPA            ;ripristino di tutti i registri
 
    MOV BX,temp     ;nel registro BX viene di nuovo copiato il valore da 
 
                    ;restituire salvato nella istruzione precedente alla POPA nella variabile temp
 
    RET     ;uscita dalla procedura e ritorno a programma chiamante
leggi ENDP    

END