.model small
.stack 100h    
.data
        
     
.code
    
    mov ax, @data
    mov dx , ax ;      inizio codice
    
    mov bl, 250  
    mov [00FEh],bl
    
    mov dx , 1h
    mov [0100h],dx  
    
    mov al, [0101h]
    
    mov al, 12h
    mov[0200h],al   
    mov[0200h+1],al  
    mov[0200h-1],al
    
    mov CX, 10h  
    mov 0200h, cx
    mov 0100h, cx
      
    
    mov ah,4ch
    int 21h
end

