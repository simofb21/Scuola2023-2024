.model small
.stack 100h    
.data
           
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice
    
    mov byte Ptr [0100h],  12h
    mov byte Ptr [0100h+1], 13h
    mov byte Ptr [0100h+2], 14h
    mov byte Ptr [0100h+3], 15h
    
    push [0100h]
    push [0100h+2]
    
    mov ah, 4ch
    int 21h
    
    
end

