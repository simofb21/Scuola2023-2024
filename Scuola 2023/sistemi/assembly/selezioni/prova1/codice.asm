.MODEL small
.DATA
    msgInserire db 'Inserisci un numero: $'
    msgStampa db 13,10,'Risultato: $',13,10

    num db ?
    valoreStampa db ?
                      
.CODE
    mov ax, @data
    mov ds, ax
    
    lea dx,msgInserire
    mov ah, 09h 
    int 21h     ; stampa messaggio
    
    mov ah,01h
    int 21h
    sub al,30h
    mov num,al  ; inserimento da tastiera. la sottrazione e' per passare da ascii a num
    
    mov al,num 
    cmp al,5        ;verifica se il numero e' maggiore o uguale a 5
    jge isMaggioreUguale5
    

    mov valoreStampa, 0      ;stampa 0, se e' ge 5
    jmp stampaRisultato 

isMaggioreUguale5:          
    mov valoreStampa,1 ;mette 1 se min
    

stampaRisultato:
    lea dx, msgStampa   ; messaggio pre stampa
    mov ah,09h
    int 21h
    
    mov al, valoreStampa
    add al,30h ; per passare a carattere ascii
    mov dl,al
    mov ah,02h
    int 21h     ;stampa
    
    mov ah,4ch
    int 21h
END 
    

             
    
                             