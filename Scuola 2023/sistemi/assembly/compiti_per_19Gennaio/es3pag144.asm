 .model small
.stack 100h    
.data
        db 
     
.code
    
    mov ax, @data
    mov dx , ax ;      inizio codice
    
   
    
    mov ah,4ch
    int 21h
end

