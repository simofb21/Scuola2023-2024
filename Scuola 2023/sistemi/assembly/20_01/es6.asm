.model small
.stack 100h    
.data
        
     
.code
    
    mov ax, @data
    mov ds , ax ;      inizio codice
    
    mov al, [0100h]
    push ax     
    
    mov al, [0100h+1]
    push ax
    
    pop cx 
    pop cx
    
    mov ah, 4ch
    int 21h
    
    
end

