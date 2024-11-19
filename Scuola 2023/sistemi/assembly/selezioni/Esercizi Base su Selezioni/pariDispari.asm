.model small
.stack 100h    
.data
     msgInserire  db 'Inserisci un numero : $'
     numeroInserito db ?  
     msgPari db '   E pari ! $'
     msgDispari db '    E  dispari ! $ '
     
           
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice  
    
    lea dx,msgInserire         ;faccio inserire il messaggio
    mov ah,09
    int 21h
                             ;lettura input da tastiera
    mov ah,01h
    int 21h
    sub al,30h
    
    mov ah, 0
    
    mov bh, 2
        
    div bh           ;faccio la divisione, che mette il risultato in ah
    cmp ah,  0      ; confronto ah con 0, se e' 0, vuol dire che e' pari
    
    je pari          ;jump a pari
    
    lea dx, msgDispari     ; carico messaggio dispari
    mov ah,09
    int 21h
    jmp fine

    
pari: 
       
     lea dx,msgPari
     mov ah,09
     int 21h                   ;stampa messaaggio
     
    
    
fine:  
    mov ah, 4ch
    int 21h
    
    
end

