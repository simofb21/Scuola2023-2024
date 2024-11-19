.model small
.stack 100h    
.data
     base dw 1332
     altezza dw 1231
     
         
                
.code          
            
    
    mov ax, @data
    mov ds , ax ;      inizio codice
    
    
    mov ax, base
    mov dx, altezza
    
    
    mov ah, 4ch
    int 21h
    
    
end

