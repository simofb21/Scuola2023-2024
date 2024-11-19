.model small
.stack 100h    
.data
           
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice
    
    mov ax, 10h
    xchg al,ah
  
    
    
    mov ah, 4ch
    int 21h
    
    
end

