.MODEL small 
.STACK 100h
.DATA
    numero  DW 0h
    stringaSpiega DB 'Inserisci un numero $'         
    a_capo  DB 10,13,'$'              
    due     DW 02h 
    msgErrore DB 'Non e consentito inserire quello che hai inserito !$'   
    temp    DW 0h 
        
    dieci dw 10
    
    
.CODE
.STARTUP  
    MOV AX,@data
    MOV DS,AX
Inizio:

    MOV AH,09h  ;chiedo di inserire un numero
    LEA DX,stringaSpiega 
    INT 21h
                      ;chiamo funzione leggi
    CALL leggi     ;ora in bx ho il numero altrimenti ho  -1 se ci sono errori
    
    MOV numero,bx
    CMP numero,-1                   ;confronto con -1 e il numero
    JE msgErr  
    MOV cx,1          ;metto l'indice in cx
    
forLoop:     ;ciclo for che va da uno a n 
     MOV bx, numero 
     CMP cx,bx
     JG finale                ;faccio il confronto a inizio ciclo.Confronto tra l' indice(cx) e numero(bx) Se maggiore di n , vado alla fine
     
     MOV ax, numero           ;metto in ax il numero, per fare la divisione tra ax e l' indice, ovvero tra il numero(ax) e l' indice
     MOV dx,0                    ;prima di fare la divisione azzero dx perche' e' dove viene salvato il resto della divisione
     DIV cx 
     
     
     CMP dx, 0                ;il resto della divisone lo salva in dx, che confronto con 0
     JE stampa                 ;se  e' 0 il resto, vado a stampa 
     
     INC cx ; i++  
     
     JMP forLoop    ;torno a inizio ciclo
     

stampa:
     MOV bx, cx       ;metto in bx il numero da stampare
     CALL scrivi          ;stampo
     INC cx ;          ;incremento anche qua cx
     JMP forLoop      ;torno indietro al ciclo, ma prima l' ho stampato



;fine ciclo    
msgErr: 
    MOV AH,09h  ;stampa a video vai a capo
    LEA DX,a_capo 
    INT 21h                 ; stampo del messaggio di errore se non inserisce numero
    MOV ah,09
    LEA dx,msgErrore
    INT 21h
    MOV AH,09h  ;stampa a video vai a capo
    LEA DX,a_capo 
    INT 21h
    JMP Inizio   
    
finale:
    MOV AH,4ch               ;termino il programma
    INT 21h
    
    
;parte procedure 

leggi PROC
 
    PUSHA       ;salvataggio di tutti i registri
    MOV BX,0    ;azzero registro di accumulo della cifra a 16 bit
cicloLettura: 
    MOV AH,01h      ;servizio DOS di lettura da tastiera
    INT 21h         
    CMP AL,0Dh      ;il carattere ASCII letto viene confrontato con INVIO (carattere 13)
 
    JE fine         ;se INVIO premuto la cifra   terminata e salto a fine
 
    CMP AL, 48
    JB fineDiversa          ;confronto se l'inserimento attuale e' o no un numero
    CMP al,57
    JG fineDiversa
    
    PUSH AX         ;salvo il numero letto nello stack
    MOV AX,BX       ;moltiplico per 10 il numero accumulato in BX
    MUL dieci       ;AX * 10
    MOV BX,AX       ;colloco in BX il risultato della moltiplicazione per 10
 
    POP AX          ;riprendo in AX l'ultima cifra letta
    SUB AL,30h      ;la cifra viene aggiustata da ASCII a numero sottraendo 30h
    
    MOV AH,0        ;azzero parte alta di AX
    ADD BX,AX       ;somma del valore accumulato in BX con l'ultima cifra letta
 
    JMP cicloLettura       ;salto incondizionato al ciclo di lettura da tastiera


fineDiversa:
    MOV BX,-1   
    
fine: 
    MOV temp,BX     ;salvataggio del registro da restituire in uscita nella variabile temporanea 
 
    POPA            ;ripristino di tutti i registri
 
    MOV BX,temp     ;nel registro BX viene di nuovo copiato il valore da 
 
                    ;restituire salvato nella istruzione precedente alla POPA nella variabile temp
 
    RET     ;uscita dalla procedura e ritorno a programma chiamante
leggi ENDP    



;procedura di stampa a video
scrivi PROC
 
    PUSHA       ;salvataggio di tutti i registri  
    
    MOV AH,09h  ;stampa a video vai a capo
    LEA DX,a_capo 
    INT 21h
    
    MOV AX,BX   ;poniamo in AX il numero da stampare prelevandolo da BX
    MOV CL,00   ;azzeramento contatore di cifre
sta: 
    MOV DX,0    ;azzeramento parte alta della cifra a 32 bit che viene divisa per 10
    DIV dieci   ;divisione a 16 bit per fare DX:AX/10. Resto in DX. Quoziente in AX
 
    PUSH DX     ;salvataggio del resto nello stack
 
    INC CL      ;aggiornamento contatore cifre
    CMP AX,0    ;verifica se quoziente = 0
    JNE sta     ;salta a etichetta sta se quoziente <> 0
rip: 
    POP DX      ;recupero resto da stampare
    
    ADD DL,30h  ;aggiustamento cifra come carattere ASCII sommando 48 (30h)
    MOV AH,02h  ;servizio DOS di stampa a video
    INT 21h
    
    DEC CL      ;decremento contatore cifre
 
    JNZ rip     ;se diverso da zero ripeto la stampa di un'altra cifra
 
    POPA        ;ripristino di tutti i registri
    RET         ;uscita dalla procedura e ritorno a programma chiamante
scrivi ENDP 