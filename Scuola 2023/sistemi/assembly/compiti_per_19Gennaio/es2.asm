.model small
.stack 100h    
.data
        
     
.code
    
    mov ax, @data
    mov dx , ax ;      inizio codice
    
    mov 0100h, 1h
    mov ax, 0100h
    
    mov bl, [ax]    
    mov [ax+1], bl
    
    mov ah,4ch
    int 21h
end

