.model small
.stack 100h
.data

    nVolteEseguito db 0

.code

    mov ax, @data
    mov ds, ax ; inizio codice

cicloStampa:     
    
    cmp nVolteEseguito, 9
    jg  fine ;confronta se l' ha fattto piu di 10 volte
    
    mov dl,nVolteEseguito
    add dl,'0'
    mov ah,02h
    int 21h
    
    ; Vai a capo e a capo (newline)
    mov dl, 10
    mov ah, 02h
    int 21h
    mov dl, 13
    int 21h  
                        
    add nVolteEseguito,1
    
    jmp cicloStampa


fine:  
    mov ah, 09
    int 21h
    mov ah, 4ch                    ;end
    int 21h

end
