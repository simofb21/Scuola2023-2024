.model small
.stack 100h
.data
    msg db 'Inserisci un numero da tastiera'
    
 
.code

    mov ax, @data
    mov ds, ax ; inizio codice   
    
    lea dx,msg
    mov ah,09
    int 21h
          

ciclo:     
    
    mov ah,01
    int 21h
    cmp al, 13
    je  fine ;confronta se l' ha fattto piu di 10 volte
   
    mov cx, al
    
    mul 10 
    add, cx, al
    
    mov dx,cx
    
    jmp cicloStampa


fine:  
    mov ah, 09
    int 21h
    mov ah, 4ch                    ;end
    int 21h

end
